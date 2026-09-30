/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_User_TestUserCreateDeviceManifest_Native
ENTRY_POINT: 035ea398
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x035ea6f0) */

void Oculus_Platform_CAPI__ovr_User_TestUserCreateDeviceManifest_Native(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  *unaff_x22 = unaff_x21;
  thunk_FUN_01f51358();
  puVar2 = Method_System_Text_Encoding_DefaultDecoder__ctor__;
  if (unaff_x20 == (long *)0x0) {
LAB_035ea3f4:
    plVar4 = (long *)thunk_FUN_01f116d0();
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_035ea474;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_035ea474:
      plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      puVar3 = Method_System_Text_Encoding_DefaultEncoder__ctor__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_035ea4ec;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_035ea4ec:
        uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_035ea60c;
          lVar9 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_035ea5b8;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_035ea5a0;
        }
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_035ea548;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar3,0);
LAB_035ea548:
        uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        uVar6 = FUN_034a66ec(uVar6,0);
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar6,uVar6);
        }
        FUN_0329d8fc();
      } while( true );
    }
    lVar9 = thunk_FUN_01f116d0();
    if (lVar9 == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar6 = thunk_FUN_01f117cc();
      uVar7 = thunk_FUN_01efb3a4(Method_System_Enum_EnumResult_SetFailure__);
      uVar8 = thunk_FUN_01efb3a4(Method_System_Enum_EnumResult_SetFailure__);
      FUN_034efd98(uVar6,uVar7,uVar8,0);
      uVar7 = thunk_FUN_01efb3a4(Method_UnityEngine_EnumDataUtility_<>c_<GetCachedEnumData>b__2_1__)
      ;
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar6,uVar7);
    }
    if (unaff_x21 == 0) {
LAB_035ea68c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    Meta_WitAi_Events_SpeechEvents__get_OnPartialResponse();
  }
  else {
    lVar9 = *unaff_x20;
    bVar1 = *(byte *)(*(long *)Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__ +
                     0x130);
    if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__)) {
      if (lVar9 != *(long *)Method_System_Threading_Tasks_TaskFactory_StartNew<Task>__)
      goto LAB_035ea3f4;
    }
    else {
      FUN_034a66ec();
    }
    if (unaff_x21 == 0) goto LAB_035ea68c;
    FUN_0329d8fc();
  }
LAB_035ea650:
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    FUN_035ea7b8();
    return;
  }
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_035ea5a0:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_035ea600;
    }
  }
LAB_035ea5b8:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_035ea600:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_035ea60c:
  if (unaff_x21 == 0) goto LAB_035ea68c;
  goto LAB_035ea650;
}


