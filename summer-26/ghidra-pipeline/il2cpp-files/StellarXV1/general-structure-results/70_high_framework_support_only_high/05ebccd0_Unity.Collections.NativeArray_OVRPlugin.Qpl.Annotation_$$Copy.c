/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 05ebccd0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long *unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w24;
  uint unaff_w26;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(in_x10[4] + 6) * 0x10 + 0x138);
      goto LAB_05ebccf8;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_040b1e00();
LAB_05ebccf8:
  (*(code *)*puVar2)();
  if ((unaff_w24 & unaff_w26) == 1) {
    (**(code **)(*unaff_x19 + 0x328))();
  }
  lVar3 = (**(code **)(*unaff_x19 + 0x3f8))();
  if (lVar3 == 0) {
    if ((unaff_x22 & 1) == 0) {
      return;
    }
LAB_05ebce1c:
    (**(code **)(*unaff_x19 + 0x458))();
  }
  else {
    plVar4 = (long *)(**(code **)(*unaff_x19 + 0x3f8))();
    if (plVar4 == (long *)0x0) goto LAB_05ebcf2c;
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xc0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_05ebcde0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar4,lVar3,3);
LAB_05ebcde0:
    uVar6 = (*(code *)*puVar2)(plVar4);
    if (((uVar6 & 1) != 0) && (unaff_w26 != 0)) {
      (**(code **)(*unaff_x19 + 0x458))();
    }
    if ((unaff_x22 & 1) == 0) {
      return;
    }
    if ((uVar6 & 1) == 0) goto LAB_05ebce1c;
  }
  lVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285ee8);
  FUN_074f484c(lVar3,0);
  if (unaff_x19[7] != 0) {
    if (*(long *)(unaff_x19[7] + 0xb8) != 0) {
      FUN_06791340();
    }
    if (lVar3 != 0) {
      iVar1 = FUN_074eea38(lVar3,0);
      if (0 < iVar1) {
        FUN_074d57ec(*(undefined8 *)PTR_DAT_092ba6d8,lVar3,0);
                    /* WARNING: Could not recover jumptable at 0x05ebced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x19 + 0x268))();
        return;
      }
      (**(code **)(*unaff_x19 + 0x468))();
                    /* WARNING: Could not recover jumptable at 0x05ebcf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x2a8))();
      return;
    }
  }
LAB_05ebcf2c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


