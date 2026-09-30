/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$AddColliders
ENTRY_POINT: 08a338e0
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__AddColliders(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *puVar7;
  long in_stack_00000008;
  
  *(long *)(param_1 + 0x10) = unaff_x19;
  thunk_FUN_049ee3d8();
  puVar7 = (undefined8 *)(unaff_x20 + 0x18);
  *puVar7 = unaff_x22;
  thunk_FUN_049ee3d8(puVar7);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x21;
  thunk_FUN_049ee3d8();
  if (*(long *)(unaff_x19 + 0xb0) != 0) {
    uVar2 = System_Collections_Generic_Dictionary<ValueTuple<uint,_uint>,_uint>___ctor
                      (*(long *)(unaff_x19 + 0xb0),*puVar7,&stack0x00000008,
                       *(undefined8 *)PTR_DAT_0ac52988);
    puVar1 = PTR_DAT_0ac46eb8;
    if ((uVar2 & 1) == 0) {
      lVar3 = FUN_08a3213c();
      plVar5 = (long *)(unaff_x20 + 0x28);
      *plVar5 = lVar3;
      thunk_FUN_049ee3d8(plVar5,lVar3);
      if (*plVar5 != 0) {
        thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
        FUN_08cc3ad0();
        FUN_08a31b08();
      }
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b32acf7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac46eb8);
      DAT_0b32acf7 = '\x01';
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar3 = *(long *)puVar1;
    }
    plVar5 = (long *)**(undefined8 **)(lVar3 + 0xb8);
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      uVar6 = *(undefined8 *)PTR_DAT_0ac529d8;
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0ac46ed8) {
            puVar7 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_08a33a54;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68(plVar5,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a33a54:
      (*(code *)*puVar7)(plVar5,uVar6,puVar7[1]);
      if (in_stack_00000008 != 0) {
        FUN_08a2ce98(in_stack_00000008,0,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


