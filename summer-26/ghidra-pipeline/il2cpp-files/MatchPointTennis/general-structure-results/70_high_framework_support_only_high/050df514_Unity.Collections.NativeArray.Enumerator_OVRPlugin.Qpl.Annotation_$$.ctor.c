/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 050df514
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Qpl_Annotation>___ctor(void)

{
  long *plVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  
  do {
    plVar1 = unaff_x23;
    if ((bool)in_ZR) {
      plVar1 = unaff_x21;
    }
    do {
      unaff_x21 = plVar1;
      unaff_w22 = unaff_w22 + 1;
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_050df438;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac();
LAB_050df438:
      iVar2 = (*(code *)*puVar3)();
      if (iVar2 <= unaff_w22) {
        lVar5 = **(long **)(unaff_x19 + 0x38);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_04481fb8(lVar5);
        }
        thunk_FUN_04485110(unaff_x21,lVar5);
        return;
      }
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_050df498;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac();
LAB_050df498:
      uVar4 = (*(code *)*puVar3)();
      unaff_x23 = (long *)thunk_FUN_04485110(uVar4,*unaff_x27);
      plVar1 = unaff_x21;
    } while (unaff_x23 == (long *)0x0);
    lVar5 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_050df504;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(unaff_x23,*unaff_x27,0);
LAB_050df504:
    (*(code *)*puVar3)(unaff_x23,puVar3[1]);
    in_ZR = true;
  } while( true );
}


