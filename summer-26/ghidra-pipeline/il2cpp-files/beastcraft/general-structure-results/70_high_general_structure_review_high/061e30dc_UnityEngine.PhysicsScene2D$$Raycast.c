/*
FUNCTION_NAME: UnityEngine.PhysicsScene2D$$Raycast
ENTRY_POINT: 061e30dc
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;telemetry_or_network_hits_1
*/


void UnityEngine_PhysicsScene2D__Raycast(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(param_1 + 0x30) = unaff_x23;
  thunk_FUN_02ee2be8();
  lVar3 = thunk_FUN_02e78ab8(*(undefined8 *)
                              Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Multiplier_FixedPointUtilities_TypeInfo
                            );
  FUN_03f2ada4(lVar3,*(undefined8 *)Game_Services_FirebaseTokenService_TypeInfo);
  lVar4 = thunk_FUN_02e78ab8(*unaff_x28);
  FUN_061c9738(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) =
         *(undefined8 *)Best_HTTP_Hosts_Connections_HTTP2_HTTP2FrameHeaderAndPayload_TypeInfo;
    thunk_FUN_02ee2be8();
    *(undefined8 *)(lVar4 + 0x10) = *unaff_x26;
    thunk_FUN_02ee2be8();
    if (lVar3 != 0) {
      lVar7 = *(long *)(lVar3 + 0x10);
      lVar8 = *unaff_x19;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *plVar5 = lVar4;
          thunk_FUN_02ee2be8(plVar5,lVar4);
        }
        else {
          FUN_03f2b60c(lVar3,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(long *)(unaff_x22 + 0x28) = lVar3;
        thunk_FUN_02ee2be8((long *)(unaff_x22 + 0x28),lVar3);
        lVar3 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar3 != 0) {
          uVar1 = *(uint *)(unaff_x21 + 0x18);
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
            thunk_FUN_02ee2be8();
          }
          else {
            FUN_03f2b60c();
          }
          lVar3 = thunk_FUN_02e78ab8(*unaff_x25);
          FUN_061c9740(lVar3,0);
          puVar2 = Game_View_Locomotions_GrappleHookArgs_TypeInfo;
          if (lVar3 != 0) {
            *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)UnityEngine_InputSystem_HID_HID_TypeInfo;
            thunk_FUN_02ee2be8();
            *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
            thunk_FUN_02ee2be8((undefined8 *)(lVar3 + 0x20));
            uVar6 = *unaff_x27;
            *(undefined4 *)(lVar3 + 0x18) = 1;
            lVar4 = thunk_FUN_02e78ab8(uVar6);
            FUN_03f2ada4(lVar4,*unaff_x20);
            if (lVar4 != 0) {
              lVar7 = *(long *)(lVar4 + 0x10);
              uVar6 = *(undefined8 *)System_Guid_TypeInfo;
              lVar8 = *unaff_x29;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar4 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                  thunk_FUN_02ee2be8();
                }
                else {
                  FUN_03f2b60c(lVar4,uVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar3 + 0x30) = lVar4;
                thunk_FUN_02ee2be8((long *)(lVar3 + 0x30),lVar4);
                lVar4 = thunk_FUN_02e78ab8(*(undefined8 *)
                                            Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Multiplier_FixedPointUtilities_TypeInfo
                                          );
                FUN_03f2ada4(lVar4,*(undefined8 *)Game_Services_FirebaseTokenService_TypeInfo);
                lVar7 = thunk_FUN_02e78ab8(*unaff_x28);
                FUN_061c9738(lVar7,0);
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x18) =
                       *(undefined8 *)Best_HTTP_Caching_HTTPCacheAcquireLockException_TypeInfo;
                  thunk_FUN_02ee2be8();
                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                  thunk_FUN_02ee2be8();
                  if (lVar4 != 0) {
                    lVar8 = *(long *)(lVar4 + 0x10);
                    lVar9 = *unaff_x19;
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar1 = *(uint *)(lVar4 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar5 = lVar7;
                        thunk_FUN_02ee2be8(plVar5,lVar7);
                      }
                      else {
                        FUN_03f2b60c(lVar4,lVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar3 + 0x28) = lVar4;
                      thunk_FUN_02ee2be8((long *)(lVar3 + 0x28),lVar4);
                      lVar4 = *(long *)(unaff_x21 + 0x10);
                      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                      if (lVar4 != 0) {
                        uVar1 = *(uint *)(unaff_x21 + 0x18);
                        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                          plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar5 = lVar3;
                          thunk_FUN_02ee2be8(plVar5,lVar3);
                        }
                        else {
                          FUN_03f2b60c();
                        }
                        lVar3 = thunk_FUN_02e78ab8(*unaff_x25);
                        FUN_061c9740(lVar3,0);
                        puVar2 = UnityEngine_Rendering_GraphicsSettings_TypeInfo;
                        if (lVar3 != 0) {
                          *(undefined8 *)(lVar3 + 0x10) =
                               *(undefined8 *)UnityEngine_HDROutputSettings_TypeInfo;
                          thunk_FUN_02ee2be8();
                          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                          thunk_FUN_02ee2be8((undefined8 *)(lVar3 + 0x20));
                          uVar6 = *unaff_x27;
                          *(undefined4 *)(lVar3 + 0x18) = 0;
                          lVar4 = thunk_FUN_02e78ab8(uVar6);
                          FUN_03f2ada4(lVar4,*unaff_x20);
                          if (lVar4 != 0) {
                            lVar7 = *(long *)(lVar4 + 0x10);
                            uVar6 = *(undefined8 *)UnityEngine_Graphics_TypeInfo;
                            lVar8 = *unaff_x29;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar7 != 0) {
                              uVar1 = *(uint *)(lVar4 + 0x18);
                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                thunk_FUN_02ee2be8();
                              }
                              else {
                                FUN_03f2b60c(lVar4,uVar6,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar3 + 0x30) = lVar4;
                              thunk_FUN_02ee2be8((long *)(lVar3 + 0x30),lVar4);
                              lVar4 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Multiplier_FixedPointUtilities_TypeInfo
                                                  );
                              FUN_03f2ada4(lVar4,*(undefined8 *)
                                                  Game_Services_FirebaseTokenService_TypeInfo);
                              lVar7 = thunk_FUN_02e78ab8(*unaff_x28);
                              FUN_061c9738(lVar7,0);
                              if (lVar7 != 0) {
                                *(undefined8 *)(lVar7 + 0x18) =
                                     *(undefined8 *)System_Security_Cryptography_HMACSHA512_TypeInfo
                                ;
                                thunk_FUN_02ee2be8();
                                *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                thunk_FUN_02ee2be8();
                                if (lVar4 != 0) {
                                  lVar8 = *(long *)(lVar4 + 0x10);
                                  lVar9 = *unaff_x19;
                                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                  if (lVar8 != 0) {
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar5 = lVar7;
                                      thunk_FUN_02ee2be8(plVar5,lVar7);
                                    }
                                    else {
                                      FUN_03f2b60c(lVar4,lVar7,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar3 + 0x28) = lVar4;
                                    thunk_FUN_02ee2be8((long *)(lVar3 + 0x28),lVar4);
                                    lVar4 = *(long *)(unaff_x21 + 0x10);
                                    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                    if (lVar4 != 0) {
                                      uVar1 = *(uint *)(unaff_x21 + 0x18);
                                      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                        plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar5 = lVar3;
                                        thunk_FUN_02ee2be8(plVar5,lVar3);
                                      }
                                      else {
                                        FUN_03f2b60c();
                                      }
                                      lVar3 = thunk_FUN_02e78ab8(*unaff_x25);
                                      FUN_061c9740(lVar3,0);
                                      puVar2 = UnityEngine_GraphicsBufferHandle_TypeInfo;
                                      if (lVar3 != 0) {
                                        *(undefined8 *)(lVar3 + 0x10) =
                                             *(undefined8 *)
                                              SouthPointe_Serialization_MessagePack_GuidHandler_TypeInfo
                                        ;
                                        thunk_FUN_02ee2be8();
                                        *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                        thunk_FUN_02ee2be8((undefined8 *)(lVar3 + 0x20));
                                        uVar6 = *unaff_x27;
                                        *(undefined4 *)(lVar3 + 0x18) = 0;
                                        lVar4 = thunk_FUN_02e78ab8(uVar6);
                                        FUN_03f2ada4(lVar4,*unaff_x20);
                                        if (lVar4 != 0) {
                                          lVar7 = *(long *)(lVar4 + 0x10);
                                          uVar6 = *(undefined8 *)
                                                                                                      
                                                  Oculus_Platform_Models_GroupPresenceJoinIntent_TypeInfo
                                          ;
                                          lVar8 = *unaff_x29;
                                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          if (lVar7 != 0) {
                                            uVar1 = *(uint *)(lVar4 + 0x18);
                                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar6;
                                              thunk_FUN_02ee2be8();
                                            }
                                            else {
                                              FUN_03f2b60c(lVar4,uVar6,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar8 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar3 + 0x30) = lVar4;
                                            thunk_FUN_02ee2be8((long *)(lVar3 + 0x30),lVar4);
                                            lVar4 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                                                                                                                
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Multiplier_FixedPointUtilities_TypeInfo
                                                  );
                                            FUN_03f2ada4(lVar4,*(undefined8 *)
                                                                                                                                
                                                  Game_Services_FirebaseTokenService_TypeInfo);
                                            lVar7 = thunk_FUN_02e78ab8(*unaff_x28);
                                            FUN_061c9738(lVar7,0);
                                            if (lVar7 != 0) {
                                              *(undefined8 *)(lVar7 + 0x18) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Best_HTTP_Hosts_Connections_HTTP2_HTTP2ErrorCodes_TypeInfo
                                              ;
                                              thunk_FUN_02ee2be8();
                                              *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                              thunk_FUN_02ee2be8();
                                              if (lVar4 != 0) {
                                                lVar8 = *(long *)(lVar4 + 0x10);
                                                lVar9 = *unaff_x19;
                                                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                                if (lVar8 != 0) {
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar5 = lVar7;
                                                    thunk_FUN_02ee2be8(plVar5,lVar7);
                                                  }
                                                  else {
                                                    FUN_03f2b60c(lVar4,lVar7,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_02ee2be8((long *)(lVar3 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02ee2be8(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_03f2b60c();
                                                    }
                                                    lVar3 = thunk_FUN_02e78ab8(*unaff_x25);
                                                    FUN_061c9740(lVar3,0);
                                                    puVar2 = 
                                                  Best_HTTP_Hosts_Connections_HTTP2_HTTP2Settings_TypeInfo
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_Hosts_Connections_HTTP2_HTTP2FrameTypes_TypeInfo
                                                  ;
                                                  thunk_FUN_02ee2be8();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02ee2be8((undefined8 *)(lVar3 + 0x20));
                                                  uVar6 = *unaff_x27;
                                                  *(undefined4 *)(lVar3 + 0x18) = 4;
                                                  lVar4 = thunk_FUN_02e78ab8(uVar6);
                                                  FUN_03f2ada4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_Macs_HMac_TypeInfo
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02ee2be8();
                                                    }
                                                    else {
                                                      FUN_03f2b60c(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02ee2be8((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                                                                                                                            
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Multiplier_FixedPointUtilities_TypeInfo
                                                  );
                                                  FUN_03f2ada4(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Game_Services_FirebaseTokenService_TypeInfo);
                                                  lVar7 = thunk_FUN_02e78ab8(*unaff_x28);
                                                  FUN_061c9738(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_Hosts_Connections_HTTP2_HTTP2HeadersFlags_TypeInfo
                                                  ;
                                                  thunk_FUN_02ee2be8();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02ee2be8();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_02ee2be8(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_03f2b60c(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_02ee2be8((long *)(lVar3 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02ee2be8(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_03f2b60c();
                                                    }
                                                    lVar3 = thunk_FUN_02e78ab8(*unaff_x25);
                                                    FUN_061c9740(lVar3,0);
                                                    puVar2 = 
                                                  Best_HTTP_Hosts_Connections_HTTP2_HTTP2DataFlags_TypeInfo
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_Hosts_Connections_HTTP2_HPACKEncoder_TypeInfo
                                                  ;
                                                  thunk_FUN_02ee2be8();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02ee2be8((undefined8 *)(lVar3 + 0x20));
                                                  uVar6 = *unaff_x27;
                                                  *(undefined4 *)(lVar3 + 0x18) = 4;
                                                  lVar4 = thunk_FUN_02e78ab8(uVar6);
                                                  FUN_03f2ada4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Best_HTTP_Hosts_Settings_HTTP1ConnectionSettings_TypeInfo
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02ee2be8();
                                                    }
                                                    else {
                                                      FUN_03f2b60c(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02ee2be8((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02e78ab8(*(undefined8 *)
                                                                                                                                                            
                                                  Best_HTTP_SecureProtocol_Org_BouncyCastle_Math_EC_Multiplier_FixedPointUtilities_TypeInfo
                                                  );
                                                  FUN_03f2ada4(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Game_Services_FirebaseTokenService_TypeInfo);
                                                  lVar7 = thunk_FUN_02e78ab8(*unaff_x28);
                                                  FUN_061c9738(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Best_HTTP_Hosts_Connections_HTTP2_HTTP2SettingsRegistry_TypeInfo
                                                  ;
                                                  thunk_FUN_02ee2be8();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02ee2be8();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_02ee2be8(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_03f2b60c(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_02ee2be8((long *)(lVar3 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02ee2be8(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_03f2b60c();
                                                    }
                                                    *(long *)(in_stack_00000000 + 0x28) = unaff_x21;
                                                    thunk_FUN_02ee2be8();
                                                    FUN_061c950c(in_stack_00000008,in_stack_00000000
                                                                 ,0);
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


