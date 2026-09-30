/*
FUNCTION_NAME: FUN_05bb4f08
ENTRY_POINT: 05bb4f08
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_05bb4f08(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  long *plVar15;
  long local_68;
  
                    /* try { // try from 05bb4f08 to 05cb4f1b has its CatchHandler @ 05bb44c8 */
                    /* try { // try from 05bb4f1c to 05cb4f2b has its CatchHandler @ 05bb4f30 */
                    /* catch() { ... } // from try @ 05bb4e4c with catch @ 05bb4f30
                       catch() { ... } // from try @ 05bb4f1c with catch @ 05bb4f30 */
  if ((DAT_06dc2435 & 1) == 0) {
                    /* try { // try from 05bb4f34 to 05cb4f37 has its CatchHandler @ 05bb5674 */
                    /* try { // try from 05bb4f38 to 05cb4f5b has its CatchHandler @ 05bb44c8 */
                    /* catch() { ... } // from try @ 05bb4eec with catch @ 05bb4f3c */
    FUN_02d965b8(
                Method_UnityEngine_UIElements_BaseFieldTraits<float,_UxmlFloatAttributeDescription>_Init__
                );
                    /* catch() { ... } // from try @ 05bb4ec8 with catch @ 05bb4f40 */
                    /* catch() { ... } // from try @ 05bb4ecc with catch @ 05bb4f44 */
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_MoveItemImmediately__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Reply>_AwaitUnsafeOnCompleted<TaskAwaiter<Reply>,_Client_<SendCommandAsync>d__26>__
                );
                    /* try { // try from 05bb4f5c to 05cb4f8f has its CatchHandler @ 05bb502c */
    FUN_02d965b8(
                Method_UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>__ctor__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_Start<AutoMatchmakingNGO_<JoinLobby>d__10>__
                );
    FUN_02d965b8(OVR_OpenVR_IVROverlay__DestroyOverlay_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a187c8);
                    /* try { // try from 05bb4f90 to 05cb4fd7 has its CatchHandler @ 05bb44c8 */
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>_TryGetValue__)
    ;
    FUN_02d965b8(OVR_OpenVR_IVROverlay__SetOverlayTransformTrackedDeviceComponent_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a1ad28);
    FUN_02d965b8(Unity_Services_Qos_Http_HttpClientResponse_TypeInfo);
    DAT_06dc2435 = 1;
  }
  local_68 = 0;
  iVar6 = FUN_05bb3a18(param_1,1);
  if (iVar6 == 0x17) {
                    /* try { // try from 05bb4fd8 to 05cb4fdb has its CatchHandler @ 05bb5038 */
                    /* try { // try from 05bb4fdc to 05cb4ff7 has its CatchHandler @ 05bb503c */
    lVar8 = FUN_05bb42dc(param_1,1);
    puVar1 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_MoveItemImmediately__
    ;
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar9 == 0)) goto LAB_05bb5464;
                    /* try { // try from 05bb4ff8 to 05cb5017 has its CatchHandler @ 05bb44c8 */
    uVar10 = FUN_04e95158(lVar9,lVar8,&local_68,
                          *(undefined8 *)
                           Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_MoveItemImmediately__
                         );
    if ((uVar10 & 1) == 0) {
                    /* try { // try from 05bb5018 to 05cb5027 has its CatchHandler @ 05bb502c */
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar9 == 0)) goto LAB_05bb5464;
                    /* catch() { ... } // from try @ 05bb4f5c with catch @ 05bb502c
                       catch() { ... } // from try @ 05bb5018 with catch @ 05bb502c */
                    /* try { // try from 05bb5030 to 05cb5033 has its CatchHandler @ 05bb5674 */
      uVar10 = FUN_04e95158(lVar9,lVar8,&local_68,*(undefined8 *)puVar1);
                    /* try { // try from 05bb5034 to 05cb5053 has its CatchHandler @ 05bb44c8 */
      if ((uVar10 & 1) == 0) {
                    /* catch() { ... } // from try @ 05bb4fd8 with catch @ 05bb5038 */
        if (lVar8 == 0) goto LAB_05bb5464;
                    /* catch() { ... } // from try @ 05bb4fdc with catch @ 05bb503c */
        uVar14 = *(undefined8 *)(lVar8 + 0x18);
        lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_Start<AutoMatchmakingNGO_<JoinLobby>d__10>__
                                  );
                    /* try { // try from 05bb5054 to 05cb5087 has its CatchHandler @ 05bb5138 */
        FUN_05ae1340(lVar9,lVar8,uVar14,0);
        local_68 = lVar9;
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar11 == 0)) goto LAB_05bb5464;
                    /* try { // try from 05bb5088 to 05cb50cf has its CatchHandler @ 05bb44c8 */
        FUN_04e935f0(lVar11,lVar8,lVar9,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_BaseFieldTraits<float,_UxmlFloatAttributeDescription>_Init__
                    );
      }
    }
    puVar5 = Method_UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>__ctor__;
    puVar4 = OVR_OpenVR_IVROverlay__SetOverlayTransformTrackedDeviceComponent_TypeInfo;
    puVar3 = OVR_OpenVR_IVROverlay__DestroyOverlay_TypeInfo;
    puVar2 = Unity_Services_Qos_Http_HttpClientResponse_TypeInfo;
    puVar1 = PTR_DAT_06a1ad28;
    lVar8 = 0;
                    /* try { // try from 05bb50d0 to 05cb50d3 has its CatchHandler @ 05bb5148 */
                    /* try { // try from 05bb50d4 to 05cb50df has its CatchHandler @ 05bb514c */
    while (iVar6 = FUN_05bb3a18(param_1,0), iVar6 == 0x17) {
      lVar9 = FUN_05bb42dc(param_1,1);
      if (lVar9 == 0) goto LAB_05bb5464;
      uVar14 = *(undefined8 *)(lVar9 + 0x18);
      lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
                    /* try { // try from 05bb5104 to 05cb510f has its CatchHandler @ 05bb5144 */
      FUN_05ac7410(lVar8,lVar9,uVar14,0);
      if (lVar8 == 0) goto LAB_05bb5464;
                    /* try { // try from 05bb5110 to 05cb5123 has its CatchHandler @ 05bb44c8 */
      *(bool *)(lVar8 + 0x20) = *(int *)(param_1 + 0x80) != 0;
                    /* try { // try from 05bb5124 to 05cb5133 has its CatchHandler @ 05bb5138 */
      uVar7 = FUN_05bb65e8(param_1);
      *(undefined4 *)(lVar8 + 0x68) = uVar7;
      iVar6 = FUN_05bb668c(param_1);
                    /* catch() { ... } // from try @ 05bb5054 with catch @ 05bb5138
                       catch() { ... } // from try @ 05bb5124 with catch @ 05bb5138 */
                    /* try { // try from 05bb513c to 05cb513f has its CatchHandler @ 05bb5674 */
                    /* try { // try from 05bb5140 to 05cb5163 has its CatchHandler @ 05bb44c8 */
                    /* catch() { ... } // from try @ 05bb5104 with catch @ 05bb5144 */
                    /* catch() { ... } // from try @ 05bb50d0 with catch @ 05bb5148 */
      *(int *)(lVar8 + 0x6c) = (iVar6 - *(int *)(param_1 + 0x5c)) + *(int *)(param_1 + 0x70);
                    /* catch() { ... } // from try @ 05bb50d4 with catch @ 05bb514c */
      if (local_68 == 0) goto LAB_05bb5464;
      lVar9 = FUN_05ae1854(local_68,*(undefined8 *)(lVar8 + 0x10),0);
                    /* try { // try from 05bb5164 to 05cb5197 has its CatchHandler @ 05bb5228 */
      FUN_05bb6908(param_1,lVar8,local_68,lVar9 != 0);
      FUN_05bb6e94(param_1,lVar8,lVar9 != 0);
      lVar11 = FUN_05ae0e60(lVar8,0);
                    /* try { // try from 05bb5198 to 05cb51df has its CatchHandler @ 05bb44c8 */
      if (lVar11 == 0) goto LAB_05bb5464;
      if (0 < *(int *)(lVar11 + 0x10)) {
        lVar11 = FUN_05ae0e60(lVar8,0);
        if (lVar11 == 0) goto LAB_05bb5464;
        uVar10 = FUN_0536b474(lVar11,*(undefined8 *)puVar1,0);
        if ((uVar10 & 1) != 0) {
          if (*(long *)(lVar8 + 0x10) == 0) goto LAB_05bb5464;
          uVar10 = thunk_FUN_0536b75c(*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10),
                                      *(undefined8 *)puVar2,0);
                    /* try { // try from 05bb51e0 to 05cb51e3 has its CatchHandler @ 05bb5234 */
          if ((uVar10 & 1) == 0) {
            if (*(long *)(lVar8 + 0x10) == 0) goto LAB_05bb5464;
                    /* try { // try from 05bb5250 to 05cb5283 has its CatchHandler @ 05bb53bc */
            uVar10 = thunk_FUN_0536b75c(*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10),
                                        *(undefined8 *)puVar3,0);
            if ((uVar10 & 1) != 0) {
              *(undefined4 *)(lVar8 + 0x78) = 2;
            }
          }
          else {
                    /* try { // try from 05bb51e4 to 05cb51ff has its CatchHandler @ 05bb5238 */
            if (*(char *)(param_1 + 0x4b) == '\0') {
              *(undefined4 *)(lVar8 + 0x78) = 1;
              iVar6 = FUN_05ac7488(lVar8,0);
              if (iVar6 != 9) {
                    /* try { // try from 05bb5284 to 05cb52cb has its CatchHandler @ 05bb44c8 */
                FUN_05bb673c(param_1,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>_TryGetValue__
                             ,**(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8),
                             *(undefined4 *)(lVar8 + 0x68),*(undefined4 *)(lVar8 + 0x6c));
              }
              if (*(char *)(param_1 + 0x49) != '\0') {
                plVar15 = *(long **)(param_1 + 0x18);
                if (plVar15 == (long *)0x0) goto LAB_05bb5464;
                lVar11 = *plVar15;
                uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar10 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) ==
                        *(long *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Reply>_AwaitUnsafeOnCompleted<TaskAwaiter<Reply>,_Client_<SendCommandAsync>d__26>__
                       ) {
                      puVar12 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                      goto LAB_05bb5310;
                    }
                    uVar10 = uVar10 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar10 != 0);
                }
                puVar12 = (undefined8 *)
                          FUN_02dd004c(plVar15,*(long *)
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Reply>_AwaitUnsafeOnCompleted<TaskAwaiter<Reply>,_Client_<SendCommandAsync>d__26>__
                                       ,1);
LAB_05bb5310:
                uVar14 = (*(code *)*puVar12)(plVar15,puVar12[1]);
                System_Xml_Ucs4Decoder1234___ctor(lVar8,uVar14,0);
              }
            }
            else {
              lVar11 = FUN_05ac74e0(lVar8,0);
                    /* try { // try from 05bb5200 to 05cb5213 has its CatchHandler @ 05bb44c8 */
              if ((lVar11 == 0) || (lVar11 = FUN_05371f5c(lVar11,0), lVar11 == 0))
              goto LAB_05bb5464;
                    /* try { // try from 05bb5214 to 05cb5223 has its CatchHandler @ 05bb5228 */
              uVar10 = FUN_0536b474(lVar11,*(undefined8 *)puVar4,0);
                    /* catch() { ... } // from try @ 05bb5164 with catch @ 05bb5228
                       catch() { ... } // from try @ 05bb5214 with catch @ 05bb5228 */
                    /* try { // try from 05bb522c to 05cb522f has its CatchHandler @ 05bb5674 */
                    /* try { // try from 05bb5230 to 05cb524f has its CatchHandler @ 05bb44c8 */
                    /* catch() { ... } // from try @ 05bb51e0 with catch @ 05bb5234 */
              if (((uVar10 & 1) != 0) ||
                 (uVar10 = FUN_0536b474(lVar11,*(undefined8 *)PTR_DAT_06a187c8,0), (uVar10 & 1) != 0
                 )) {
                    /* catch() { ... } // from try @ 05bb51e4 with catch @ 05bb5238 */
                *(undefined4 *)(lVar8 + 0x78) = 1;
              }
            }
          }
        }
      }
      if (lVar9 == 0) {
        if (local_68 == 0) goto LAB_05bb5464;
        FUN_05ae16dc(local_68,lVar8,0);
      }
    }
    if (iVar6 == 0x1d) {
      if (lVar8 == 0) {
        return;
      }
      if (*(char *)(param_1 + 0x4b) == '\0') {
        return;
      }
      lVar9 = FUN_05ae0e60(lVar8,0);
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x10) < 1) {
          return;
        }
        lVar9 = FUN_05ae0e60(lVar8,0);
        if (lVar9 != 0) {
          uVar10 = FUN_0536b474(lVar9,*(undefined8 *)puVar1,0);
          if ((uVar10 & 1) == 0) {
            return;
          }
          if (*(long *)(lVar8 + 0x10) != 0) {
            uVar10 = thunk_FUN_0536b75c(*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10),
                                        *(undefined8 *)puVar2,0);
            if ((uVar10 & 1) == 0) {
              return;
            }
            plVar15 = *(long **)(lVar8 + 0x30);
            *(undefined4 *)(lVar8 + 0x78) = 1;
            if (plVar15 != (long *)0x0) {
              iVar6 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
              if (iVar6 != 9) {
                FUN_05bb673c(param_1,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>_TryGetValue__
                             ,**(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8),
                             *(undefined4 *)(lVar8 + 0x68),*(undefined4 *)(lVar8 + 0x6c));
              }
              if (*(char *)(param_1 + 0x49) == '\0') {
                return;
              }
              if (*(long *)(param_1 + 0x18) != 0) {
                uVar14 = FUN_0297bd6c(1,*(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Reply>_AwaitUnsafeOnCompleted<TaskAwaiter<Reply>,_Client_<SendCommandAsync>d__26>__
                                     );
                System_Xml_Ucs4Decoder1234___ctor(lVar8,uVar14,0);
                return;
              }
            }
          }
        }
      }
LAB_05bb5464:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  FUN_05bb427c(param_1);
  return;
}


