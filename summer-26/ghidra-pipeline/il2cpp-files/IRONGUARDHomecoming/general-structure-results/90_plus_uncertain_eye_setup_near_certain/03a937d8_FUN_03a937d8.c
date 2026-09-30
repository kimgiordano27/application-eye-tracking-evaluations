/*
FUNCTION_NAME: FUN_03a937d8
ENTRY_POINT: 03a937d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03a93cc4) */
/* WARNING: Removing unreachable block (ram,0x03a939d8) */
/* WARNING: Removing unreachable block (ram,0x03a939fc) */
/* WARNING: Removing unreachable block (ram,0x03a93a00) */

void FUN_03a937d8(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 local_40 [16];
  
  if ((DAT_04838ec3 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_8353);
    thunk_FUN_01efb3a4(StringLiteral_8354);
    thunk_FUN_01efb3a4(StringLiteral_8334);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_ContractUtils_RequiresNotNullItems<CatchBlock>__)
    ;
    thunk_FUN_01efb3a4(Method_System_Uri_get_Segments__);
    thunk_FUN_01efb3a4(Method_System_Uri_get_UserInfo__);
    thunk_FUN_01efb3a4(Method_System_UriBuilder__ctor__);
    thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_Reserve<CommandBuilder_SphereData>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputManager_TryGetDevice__);
    thunk_FUN_01efb3a4(Method_System_UriBuilder_ToString__);
    DAT_04838ec3 = 1;
  }
  puVar1 = Method_Drawing_CommandBuilder_Reserve<CommandBuilder_SphereData>__;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  iVar11 = *param_1;
  lVar10 = *(long *)(param_1 + 10);
  if (iVar11 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0x12);
    iVar11 = -1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
    goto LAB_03a93ac4;
  }
  if (*(int *)(*(long *)Method_Drawing_CommandBuilder_Reserve<CommandBuilder_SphereData>__ + 0xe0)
      == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_04838f97 == '\0') {
    thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_Reserve<CommandBuilder_SphereData>__);
    DAT_04838f97 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar1;
  }
  puVar1 = Method_UnityEngine_InputSystem_InputManager_TryGetDevice__;
  *(long *)(param_1 + 0xc) = (long)*(int *)(*(long *)(lVar3 + 0xb8) + 4) << 0x10;
  uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_034c776c(uVar4,0);
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  thunk_FUN_01f51358(param_1 + 0xe,uVar4);
  while( true ) {
    plVar5 = *(long **)(param_1 + 0xe);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200));
    if (*(long *)(param_1 + 0xc) <= lVar3) break;
    if (*(int *)(*(long *)
                  Method_System_Dynamic_Utils_ContractUtils_RequiresNotNullItems<CatchBlock>__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_035cd7fc(param_1 + 8,0);
    lVar3 = FUN_01f08890(*(undefined8 *)
                          Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,0x4000);
    plVar5 = (long *)(param_1 + 0x10);
    *plVar5 = lVar3;
    thunk_FUN_01f51358(plVar5);
    lVar3 = *plVar5;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = FUN_03a9145c(lVar10,lVar3,0,*(undefined4 *)(lVar3 + 0x18),*(undefined8 *)(param_1 + 8));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    auVar12 = FUN_0277bcac(lVar3,0,*(undefined8 *)Method_System_UriBuilder_ToString__);
    local_40 = auVar12;
    uVar8 = FUN_02a65da8(local_40,*(undefined8 *)Method_System_UriBuilder__ctor__);
    if ((uVar8 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x12) = local_40;
      thunk_FUN_01f51358(param_1 + 0x12,0);
      if (*(int *)(*(long *)StringLiteral_8334 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_02128dd8(param_1 + 2,local_40,param_1,*(undefined8 *)StringLiteral_8353);
      return;
    }
LAB_03a93ac4:
    iVar2 = FUN_02a65df4(local_40,*(undefined8 *)Method_System_Uri_get_UserInfo__);
    if (iVar2 < 0) {
      thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__);
      uVar4 = thunk_FUN_01f117cc();
      FUN_034c76c4(uVar4,0);
      uVar7 = thunk_FUN_01efb3a4(StringLiteral_8356);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar4,uVar7);
    }
    if (iVar2 == 0) break;
    plVar5 = *(long **)(param_1 + 0xe);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    piVar9 = param_1 + 0x10;
    (**(code **)(*plVar5 + 0x358))
              (plVar5,*(undefined8 *)piVar9,0,iVar2,*(undefined8 *)(*plVar5 + 0x360));
    piVar9[0] = 0;
    piVar9[1] = 0;
    thunk_FUN_01f51358(piVar9,0);
  }
  plVar5 = *(long **)(param_1 + 0xe);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03a93ccc to 03b93ccf has its CatchHandler @ 03a93ce4 */
    FUN_01f08a3c();
  }
  uVar4 = (**(code **)(*plVar5 + 0x3b8))(plVar5,*(undefined8 *)(*plVar5 + 0x3c0));
  if ((iVar11 < 0) && (plVar5 = *(long **)(param_1 + 0xe), plVar5 != (long *)0x0)) {
    lVar10 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03a93c0c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03a93c0c:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  *param_1 = -2;
  if (*(int *)(*(long *)StringLiteral_8334 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_026f6f9c(param_1 + 2,uVar4,*(undefined8 *)StringLiteral_8354);
  return;
}


