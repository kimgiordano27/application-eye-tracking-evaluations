/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2DCount
ENTRY_POINT: 0338f1c0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundary2DCount(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  
  FUN_01c5d288();
  FUN_01c5d288(PTR_DAT_04230910);
  FUN_01c5d288(PTR_DAT_0422fb28);
  *(undefined1 *)(unaff_x20 + 0x673) = 1;
  lVar1 = *(long *)(unaff_x19 + 0xe8);
  if (lVar1 != 0) goto LAB_0338f358;
  if (*(char *)(unaff_x19 + 200) == '\0') {
    uVar6 = *(undefined8 *)(unaff_x19 + 0xc0);
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar2 = FUN_032e935c(uVar6,0,0);
    if ((uVar2 & 1) != 0) goto LAB_0338f224;
    lVar1 = *(long *)(unaff_x19 + 0xc0);
  }
  else {
LAB_0338f224:
    uVar6 = *(undefined8 *)System_MonoCustomAttrs_TypeInfo;
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar1 = FUN_032e04b8(uVar6,0);
  }
  uVar6 = *(undefined8 *)
           VoxelBusters_EssentialKit_GameServicesCore_LoadAchievementsInternalCallback_TypeInfo;
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  plVar3 = (long *)FUN_032e04b8(uVar6,0);
  plVar4 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,1);
  if (plVar4 != (long *)0x0) {
    if ((lVar1 != 0) &&
       (lVar5 = thunk_FUN_01c495e4(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
      uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar6,0);
    }
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    plVar4[4] = lVar1;
    if (plVar3 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar3 + 0x8f8))(plVar3,plVar4,*(undefined8 *)(*plVar3 + 0x900));
      if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo);
      }
      plVar3 = (long *)FUN_033a78fc(0);
      if (plVar3 != (long *)0x0) {
        lVar1 = thunk_FUN_01bedf90(*(undefined8 *)
                                    (*plVar3 + (ulong)*(ushort *)
                                                       (*(long *)
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_bool>_MoveNext__
                                                  + 0x50) * 0x10 + 0x140));
        lVar1 = (**(code **)(lVar1 + 8))(plVar3,uVar6,lVar1);
        *(long *)(unaff_x19 + 0xe8) = lVar1;
        if (lVar1 != 0) {
LAB_0338f358:
          lVar1 = (**(code **)(lVar1 + 0x18))
                            (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
          if (lVar1 != 0) {
            uVar6 = *(undefined8 *)PTR_DAT_04237778;
            lVar5 = thunk_FUN_01c495e4(lVar1,uVar6);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d748(lVar1,uVar6);
            }
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


