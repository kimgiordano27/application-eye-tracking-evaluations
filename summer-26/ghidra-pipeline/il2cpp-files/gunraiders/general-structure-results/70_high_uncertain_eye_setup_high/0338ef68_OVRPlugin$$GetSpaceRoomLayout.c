/*
FUNCTION_NAME: OVRPlugin$$GetSpaceRoomLayout
ENTRY_POINT: 0338ef68
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceRoomLayout(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *in_x9;
  int in_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined8 *unaff_x24;
  long *unaff_x25;
  
  uVar6 = *in_x9;
  if (in_w10 == 0) {
    thunk_FUN_01c1d1e8(param_1);
  }
  FUN_032e04b8(uVar6,0);
  uVar1 = FUN_032e935c();
  if ((uVar1 & 1) == 0) {
    lVar7 = *(long *)(unaff_x20 + 0xd0);
  }
  else {
    uVar6 = *(undefined8 *)Method_TMPro_FastAction<Object>_Add__;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    plVar2 = (long *)FUN_032e04b8(uVar6,0);
    plVar3 = (long *)FUN_01c5d2fc(*unaff_x24,1);
    if (plVar3 == (long *)0x0) goto LAB_0338f14c;
    lVar7 = *(long *)(unaff_x20 + 0xc0);
    if ((lVar7 != 0) &&
       (lVar4 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto LAB_0338f154;
    if ((int)plVar3[3] == 0) goto LAB_0338f150;
    plVar3[4] = lVar7;
    if (plVar2 == (long *)0x0) goto LAB_0338f14c;
    lVar7 = (**(code **)(*plVar2 + 0x8f8))(plVar2,plVar3,*(undefined8 *)(*plVar2 + 0x900));
  }
  lVar4 = *(long *)(unaff_x20 + 0xd8);
  plVar2 = (long *)FUN_01c5d2fc(*unaff_x24,1);
  if (plVar2 != (long *)0x0) {
    if ((lVar7 != 0) &&
       (lVar5 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0)) {
LAB_0338f154:
      uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar6,0);
    }
    if ((int)plVar2[3] == 0) {
LAB_0338f150:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    plVar2[4] = lVar7;
    if (lVar4 != 0) {
      uVar6 = FUN_032eb758(lVar4,plVar2,0);
      if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo);
      }
      plVar2 = (long *)FUN_033a78fc(0);
      if (plVar2 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar2 + 0x188))(plVar2,uVar6,*(undefined8 *)(*plVar2 + 400));
        *(long *)(unaff_x20 + 0xe0) = lVar7;
        lVar4 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
        if (lVar4 != 0) {
          if ((unaff_x19 != 0) && (lVar5 = thunk_FUN_01c495e4(), lVar5 == 0)) goto LAB_0338f154;
          if (*(int *)(lVar4 + 0x18) == 0) goto LAB_0338f150;
          *(long *)(lVar4 + 0x20) = unaff_x19;
          if (lVar7 != 0) {
            lVar7 = (**(code **)(lVar7 + 0x18))
                              (*(undefined8 *)(lVar7 + 0x40),lVar4,*(undefined8 *)(lVar7 + 0x28));
            if (lVar7 != 0) {
              uVar6 = *(undefined8 *)Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__;
              lVar4 = thunk_FUN_01c495e4(lVar7,uVar6);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748(lVar7,uVar6);
              }
            }
            return;
          }
        }
      }
    }
  }
LAB_0338f14c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


