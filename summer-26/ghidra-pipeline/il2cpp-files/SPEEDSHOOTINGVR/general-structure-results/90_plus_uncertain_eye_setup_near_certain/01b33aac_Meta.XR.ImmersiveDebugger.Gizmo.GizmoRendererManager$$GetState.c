/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$GetState
ENTRY_POINT: 01b33aac
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__GetState
          (long param_1,long *param_2,long *param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined4 uStack000000000000001c;
  
  if ((DAT_0247c776 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234d9d8);
    DAT_0247c776 = 1;
  }
  if (param_2 == (long *)0x0) {
    uVar6 = 1;
  }
  else {
    lVar4 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    if (*param_2 != lVar4) {
      lVar4 = FUN_00e5db00(*(undefined8 *)(param_4 + 0x20));
      uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 8));
      plVar9 = (long *)thunk_FUN_0105d828(uVar6,0);
      FUN_00e5db80();
      uVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      uVar13 = thunk_FUN_010303a8(PTR_DAT_0234d9e0);
      uVar6 = FUN_01c42574(uVar13,uVar6,0);
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar13 = thunk_FUN_010400dc();
      uVar7 = thunk_FUN_010303a8(PTR_DAT_0234d120);
      FUN_01c5e198(uVar13,uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar13,param_4);
    }
    lVar4 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244(lVar4);
    }
    if (*(long *)(*param_2 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(param_2);
    }
    puVar5 = (undefined4 *)thunk_FUN_01040230();
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar13 = *(undefined8 *)(puVar5 + 2);
    lVar4 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    uVar6 = thunk_FUN_0103fd0c(**(undefined8 **)(lVar4 + 0xc0));
    lVar4 = *(long *)(param_4 + 0x20);
    uStack000000000000001c = uVar1;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244(lVar4);
    }
    uVar7 = thunk_FUN_0103fd0c(**(undefined8 **)(lVar4 + 0xc0),&stack0x0000001c);
    puVar3 = PTR_DAT_0234d9d8;
    if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar4 = *param_3;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0234d9d8) {
          puVar8 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_01b33c28;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_0103c348(param_3,*(long *)PTR_DAT_0234d9d8,0);
LAB_01b33c28:
    uVar6 = (*(code *)*puVar8)(param_3,uVar6,uVar7,puVar8[1]);
    if ((int)uVar6 == 0) {
      lVar4 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10));
      lVar4 = *(long *)(param_4 + 0x20);
      uStack000000000000001c = uVar2;
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244(lVar4);
      }
      uVar7 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&stack0x0000001c);
      lVar10 = *param_3;
      lVar4 = *(long *)puVar3;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar4) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_01b33ce8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_0103c348(param_3,lVar4,0);
LAB_01b33ce8:
      uVar6 = (*(code *)*puVar8)(param_3,uVar6,uVar7,puVar8[1]);
      if ((int)uVar6 == 0) {
        lVar10 = *param_3;
        uVar6 = *(undefined8 *)(param_1 + 8);
        lVar4 = *(long *)puVar3;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar4) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_01b33d50;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_0103c348(param_3,lVar4,0);
LAB_01b33d50:
        uVar6 = (*(code *)*puVar8)(param_3,uVar6,uVar13,puVar8[1]);
      }
    }
  }
  return uVar6;
}


