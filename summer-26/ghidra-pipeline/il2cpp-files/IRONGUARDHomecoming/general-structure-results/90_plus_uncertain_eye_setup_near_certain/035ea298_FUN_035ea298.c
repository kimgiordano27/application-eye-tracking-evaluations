/*
FUNCTION_NAME: FUN_035ea298
ENTRY_POINT: 035ea298
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_14;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x035ea6f0) */

void FUN_035ea298(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  
  if ((DAT_048337d6 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Threading_Tasks_TaskFactory_StartNew<Task>__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Text_Encoding_DefaultDecoder__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Text_Encoding_DefaultDecoder_System_Runtime_Serialization_ISerializable_GetObjectData__
                      );
    thunk_FUN_01efb3a4(Method_System_Text_Encoding_DefaultEncoder__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_System_Text_Encoding_DefaultEncoder_System_Runtime_Serialization_ISerializable_GetObjectData__
                      );
    thunk_FUN_01efb3a4(
                      Method_Sirenix_Serialization_Utilities_EmitUtilities_<>c__DisplayClass14_0_<CreateWeakInstancePropertyGetter>b__0__
                      );
    thunk_FUN_01efb3a4(
                      Method_Sirenix_Serialization_Utilities_EmitUtilities_<>c__DisplayClass15_0_<CreateWeakInstancePropertySetter>b__0__
                      );
    thunk_FUN_01efb3a4(Method_System_Text_Encoding_EncodingByteBuffer__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_DivisionHandler_<>c_<_ctor>b__0_97__);
    DAT_048337d6 = 1;
  }
  plVar14 = (long *)(param_1 + 0x18);
  lVar13 = *plVar14;
  thunk_FUN_01f3e6f0();
  plVar6 = (long *)Method_System_Text_Encoding_DefaultDecoder__ctor__;
  if (lVar13 == 0) {
    lVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_Sirenix_Serialization_Utilities_EmitUtilities_<>c__DisplayClass14_0_<CreateWeakInstancePropertyGetter>b__0__
                               );
    FUN_0329d204(lVar13,1,*(undefined8 *)
                           Method_System_Text_Encoding_DefaultEncoder_System_Runtime_Serialization_ISerializable_GetObjectData__
                );
    thunk_FUN_01f3e6f0();
    *plVar14 = lVar13;
    thunk_FUN_01f51358(plVar14,lVar13);
    plVar6 = (long *)Method_System_Text_Encoding_DefaultDecoder__ctor__;
  }
  Method_System_Text_Encoding_DefaultDecoder__ctor__ = (undefined *)plVar6;
  if (param_2 == (long *)0x0) {
LAB_035ea3f4:
    plVar14 = (long *)thunk_FUN_01f116d0(param_2,*plVar6);
    if (plVar14 != (long *)0x0) {
      lVar10 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *plVar6) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_035ea474;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar14,*plVar6,0);
LAB_035ea474:
      plVar6 = (long *)(*(code *)*puVar5)(plVar14,puVar5[1]);
      puVar4 = Method_System_Text_Encoding_EncodingByteBuffer__ctor__;
      puVar3 = Method_System_Text_Encoding_DefaultEncoder__ctor__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_035ea4ec;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_035ea4ec:
        uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar6 == (long *)0x0) goto LAB_035ea60c;
          lVar10 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_035ea5b8;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_035ea5a0;
        }
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_035ea548;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_035ea548:
        uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        uVar7 = FUN_034a66ec(uVar7,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar7,uVar7);
        }
        FUN_0329d8fc(lVar13,uVar7,*(undefined8 *)puVar4);
      } while( true );
    }
    lVar10 = thunk_FUN_01f116d0(param_2,*(undefined8 *)
                                         Method_System_Text_Encoding_DefaultDecoder_System_Runtime_Serialization_ISerializable_GetObjectData__
                               );
    if (lVar10 == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar7 = thunk_FUN_01f117cc();
      uVar8 = thunk_FUN_01efb3a4(Method_System_Enum_EnumResult_SetFailure__);
      uVar9 = thunk_FUN_01efb3a4(Method_System_Enum_EnumResult_SetFailure__);
      FUN_034efd98(uVar7,uVar8,uVar9,0);
      uVar8 = thunk_FUN_01efb3a4(Method_UnityEngine_EnumDataUtility_<>c_<GetCachedEnumData>b__2_1__)
      ;
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar7,uVar8);
    }
    if (lVar13 == 0) {
LAB_035ea68c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    Meta_WitAi_Events_SpeechEvents__get_OnPartialResponse
              (lVar13,lVar10,
               *(undefined8 *)
                Method_Sirenix_Serialization_Utilities_EmitUtilities_<>c__DisplayClass15_0_<CreateWeakInstancePropertySetter>b__0__
              );
  }
  else {
    lVar10 = *param_2;
    bVar1 = *(byte *)(*(long *)Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__ +
                     0x130);
    if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__)) {
      if (lVar10 != *(long *)Method_System_Threading_Tasks_TaskFactory_StartNew<Task>__)
      goto LAB_035ea3f4;
    }
    else {
      param_2 = (long *)FUN_034a66ec(param_2,0);
    }
    if (lVar13 == 0) goto LAB_035ea68c;
    FUN_0329d8fc(lVar13,param_2,
                 *(undefined8 *)Method_System_Text_Encoding_EncodingByteBuffer__ctor__);
  }
LAB_035ea650:
  if (0 < *(int *)(lVar13 + 0x18)) {
    FUN_035ea7b8(param_1);
    return;
  }
  return;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_035ea5a0:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_035ea600;
    }
  }
LAB_035ea5b8:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_035ea600:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_035ea60c:
  if (lVar13 == 0) goto LAB_035ea68c;
  goto LAB_035ea650;
}


