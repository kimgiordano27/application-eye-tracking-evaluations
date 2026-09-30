/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 01b80f0c
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Qpl_Annotation_Builder_Entry>
          (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  undefined8 *puVar10;
  long unaff_x21;
  long unaff_x22;
  undefined *puVar5;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0xce0));
  plVar6 = *(long **)(unaff_x19 + 0x38);
  if (plVar6 == (long *)0x0) {
    FUN_0185db00();
    plVar6 = *(long **)(unaff_x19 + 0x38);
  }
  if ((*(byte *)(*plVar6 + 0x135) & 1) == 0) {
    FUN_0185daa4();
  }
  lVar1 = thunk_FUN_01861bbc();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8))();
  if (unaff_x22 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar2 = thunk_FUN_01861bbc();
    puVar5 = PTR_DAT_037f86d8;
  }
  else {
    if (unaff_x21 != 0) {
      if (lVar1 != 0) {
        puVar10 = (undefined8 *)(lVar1 + 0x10);
        *puVar10 = 0;
        thunk_FUN_0188fd20(puVar10,0);
        plVar6 = (long *)(*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x20))();
        uVar2 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f6ce0);
        FUN_02b42fa8(uVar2,lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28),0);
        if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        uVar2 = thunk_FUN_01861bbc();
        (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x38))();
        if (plVar6 != (long *)0x0) {
          lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
          if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_0185daa4(lVar1);
          }
          lVar7 = *plVar6;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar1) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_01b81054;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_0185dba8(plVar6,lVar1,0);
LAB_01b81054:
          uVar2 = (*(code *)*puVar3)(plVar6,uVar2,puVar3[1]);
          *puVar10 = uVar2;
          thunk_FUN_0188fd20(puVar10,uVar2);
          return *puVar10;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar2 = thunk_FUN_01861bbc();
    puVar5 = PTR_DAT_037f8c70;
  }
  uVar4 = thunk_FUN_01851c08(puVar5);
  FUN_02b3cbec(uVar2,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar2);
}


