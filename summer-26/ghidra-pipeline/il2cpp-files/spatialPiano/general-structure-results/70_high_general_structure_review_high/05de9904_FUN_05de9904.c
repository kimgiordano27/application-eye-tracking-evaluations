/*
FUNCTION_NAME: FUN_05de9904
ENTRY_POINT: 05de9904
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_4
*/


void FUN_05de9904(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar2 = PTR_DAT_067c9070;
                    /* try { // try from 05de9918 to 05ee9927 has its CatchHandler @ 05de9b00 */
  if ((DAT_06bc3d5b & 1) == 0) {
                    /* try { // try from 05de9928 to 05ee9937 has its CatchHandler @ 05de9b0c */
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
                );
    FUN_02f08768(PTR_DAT_067cb890);
    FUN_02f08768(Method_System_Data_DataTableCollection_BaseAdd__);
    FUN_02f08768(PTR_DAT_067c9070);
    FUN_02f08768(Method_System_SByte_CompareTo__);
    FUN_02f08768(Method_System_SByte_Parse__);
    FUN_02f08768(Method_System_SByte_System_IConvertible_ToDateTime__);
    FUN_02f08768(Method_System_Data_Common_SByteStorage_Aggregate__);
    FUN_02f08768(Method_System_Security_Cryptography_SHA1Managed__ctor__);
    FUN_02f08768(Method_System_Security_Cryptography_SHA256Managed__ctor__);
    FUN_02f08768(Method_System_Security_Cryptography_SHA384Managed__ctor__);
    FUN_02f08768(Method_Unity_AppUI_UI_SVSquare_OnClicked__);
    FUN_02f08768(Method_Unity_AppUI_UI_SVSquare_OnDetachedFromPanel__);
    FUN_02f08768(Method_Unity_AppUI_UI_SVSquare_OnGeometryChanged__);
    FUN_02f08768(Method_Unity_AppUI_UI_SVSquare_OnKeyDown__);
    FUN_02f08768(Method_Unity_AppUI_UI_SVSquare_OnKeyboardFocusIn__);
    FUN_02f08768(Method_Unity_AppUI_UI_SVSquare_OnPointerDown__);
    FUN_02f08768(Method_Unity_AppUI_UI_SVSquare_OnPointerFocusIn__);
    FUN_02f08768(Method_Unity_AppUI_UI_SVSquare_OnPointerMove__);
    FUN_02f08768(Method_Unity_AppUI_UI_SVSquare_OnPointerUp__);
    FUN_02f08768(Method_System_Runtime_InteropServices_SafeBuffer_AcquirePointer__);
    FUN_02f08768(Method_System_Runtime_InteropServices_SafeBuffer_ReleasePointer__);
    FUN_02f08768(Method_System_Runtime_InteropServices_SafeHandle_DangerousAddRef__);
    FUN_02f08768(Method_System_Runtime_InteropServices_SafeHandle_DangerousReleaseInternal__);
    FUN_02f08768(Method_System_Runtime_InteropServices_SafeHandle_InternalDispose__);
    FUN_02f08768(Method_UnityEngine_UIElements_SafeHandleAccess_op_Implicit__);
    FUN_02f08768(Method_System_Net_Sockets_SafeSocketHandle_RegisterForBlockingSyscall__);
    DAT_06bc3d5b = 1;
  }
  lVar11 = FUN_02f0880c(*(undefined8 *)puVar2,7);
  if (lVar11 != 0) {
    uVar1 = *(uint *)(lVar11 + 0x18);
    if ((((uVar1 != 0) &&
         (*(undefined8 *)(lVar11 + 0x20) =
               *(undefined8 *)Method_UnityEngine_UIElements_SafeHandleAccess_op_Implicit__,
         uVar1 != 1)) &&
        (*(undefined8 *)(lVar11 + 0x28) =
              *(undefined8 *)Method_System_Security_Cryptography_SHA256Managed__ctor__, 2 < uVar1))
       && (((*(undefined8 *)(lVar11 + 0x30) =
                  *(undefined8 *)
                   Method_System_Runtime_InteropServices_SafeHandle_DangerousReleaseInternal__,
            uVar1 != 3 &&
            (*(undefined8 *)(lVar11 + 0x38) =
                  *(undefined8 *)Method_System_Runtime_InteropServices_SafeBuffer_AcquirePointer__,
            4 < uVar1)) &&
           ((*(undefined8 *)(lVar11 + 0x40) =
                  *(undefined8 *)Method_System_Runtime_InteropServices_SafeBuffer_ReleasePointer__,
            uVar1 != 5 &&
            (*(undefined8 *)(lVar11 + 0x48) =
                  *(undefined8 *)
                   Method_System_Net_Sockets_SafeSocketHandle_RegisterForBlockingSyscall__,
            puVar4 = 
            Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
            , 6 < uVar1)))))) {
      *(undefined8 *)(lVar11 + 0x50) =
           *(undefined8 *)Method_System_Security_Cryptography_SHA384Managed__ctor__;
      puVar3 = PTR_DAT_067cb890;
      **(long **)(*(long *)puVar4 + 0xb8) = lVar11;
      lVar11 = FUN_02f0880c(*(undefined8 *)puVar3,7);
      lVar13 = **(long **)(*(long *)puVar4 + 0xb8);
      if (lVar13 == 0) goto LAB_05de9f2c;
      if (*(int *)(lVar13 + 0x18) != 0) {
        uVar10 = FUN_060ba26c(*(undefined8 *)(lVar13 + 0x20),0);
        if (lVar11 == 0) goto LAB_05de9f2c;
        if (*(int *)(lVar11 + 0x18) != 0) {
          lVar13 = *(long *)puVar4;
          *(undefined4 *)(lVar11 + 0x20) = uVar10;
          lVar13 = **(long **)(lVar13 + 0xb8);
          if (lVar13 == 0) goto LAB_05de9f2c;
          if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0) {
            uVar10 = FUN_060ba26c(*(undefined8 *)(lVar13 + 0x28),0);
            if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
              lVar13 = *(long *)puVar4;
              *(undefined4 *)(lVar11 + 0x24) = uVar10;
              lVar13 = **(long **)(lVar13 + 0xb8);
              if (lVar13 == 0) goto LAB_05de9f2c;
              if (2 < *(uint *)(lVar13 + 0x18)) {
                uVar10 = FUN_060ba26c(*(undefined8 *)(lVar13 + 0x30),0);
                if (2 < *(uint *)(lVar11 + 0x18)) {
                  lVar13 = *(long *)puVar4;
                  *(undefined4 *)(lVar11 + 0x28) = uVar10;
                  lVar13 = **(long **)(lVar13 + 0xb8);
                  if (lVar13 == 0) goto LAB_05de9f2c;
                  if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) != 0) {
                    uVar10 = FUN_060ba26c(*(undefined8 *)(lVar13 + 0x38),0);
                    if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
                      lVar13 = *(long *)puVar4;
                      *(undefined4 *)(lVar11 + 0x2c) = uVar10;
                      lVar13 = **(long **)(lVar13 + 0xb8);
                      if (lVar13 == 0) goto LAB_05de9f2c;
                      if (4 < *(uint *)(lVar13 + 0x18)) {
                        uVar10 = FUN_060ba26c(*(undefined8 *)(lVar13 + 0x40),0);
                        if (4 < *(uint *)(lVar11 + 0x18)) {
                          lVar13 = *(long *)puVar4;
                          *(undefined4 *)(lVar11 + 0x30) = uVar10;
                          lVar13 = **(long **)(lVar13 + 0xb8);
                          if (lVar13 == 0) goto LAB_05de9f2c;
                          if (5 < *(uint *)(lVar13 + 0x18)) {
                            uVar10 = FUN_060ba26c(*(undefined8 *)(lVar13 + 0x48),0);
                            if (5 < *(uint *)(lVar11 + 0x18)) {
                              lVar13 = *(long *)puVar4;
                              *(undefined4 *)(lVar11 + 0x34) = uVar10;
                              lVar13 = **(long **)(lVar13 + 0xb8);
                              if (lVar13 == 0) goto LAB_05de9f2c;
                              if (6 < *(uint *)(lVar13 + 0x18)) {
                                uVar10 = FUN_060ba26c(*(undefined8 *)(lVar13 + 0x50),0);
                                if (6 < *(uint *)(lVar11 + 0x18)) {
                                  lVar13 = *(long *)puVar4;
                                  *(undefined4 *)(lVar11 + 0x38) = uVar10;
                                  uVar12 = *(undefined8 *)puVar2;
                                  *(long *)(*(long *)(lVar13 + 0xb8) + 8) = lVar11;
                                  lVar11 = FUN_02f0880c(uVar12,7);
                                  if (lVar11 == 0) goto LAB_05de9f2c;
                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                  if (((uVar1 != 0) &&
                                      (*(undefined8 *)(lVar11 + 0x20) =
                                            *(undefined8 *)Method_System_SByte_CompareTo__,
                                      uVar1 != 1)) &&
                                     ((*(undefined8 *)(lVar11 + 0x28) =
                                            *(undefined8 *)
                                             Method_Unity_AppUI_UI_SVSquare_OnKeyDown__, 2 < uVar1
                                      && (((*(undefined8 *)(lVar11 + 0x30) =
                                                 *(undefined8 *)
                                                  Method_Unity_AppUI_UI_SVSquare_OnPointerUp__,
                                           uVar1 != 3 &&
                                           (*(undefined8 *)(lVar11 + 0x38) =
                                                 *(undefined8 *)
                                                  Method_Unity_AppUI_UI_SVSquare_OnGeometryChanged__
                                           , 4 < uVar1)) &&
                                          (*(undefined8 *)(lVar11 + 0x40) =
                                                *(undefined8 *)
                                                 Method_Unity_AppUI_UI_SVSquare_OnClicked__,
                                          puVar3 = 
                                          Method_System_Data_Common_SByteStorage_Aggregate__,
                                          uVar1 != 5)))))) {
                                    *(undefined8 *)(lVar11 + 0x48) =
                                         *(undefined8 *)
                                          Method_System_Data_Common_SByteStorage_Aggregate__;
                                    if (6 < uVar1) {
                                      *(undefined8 *)(lVar11 + 0x50) =
                                           *(undefined8 *)
                                            Method_System_Security_Cryptography_SHA1Managed__ctor__;
                                      uVar12 = *(undefined8 *)puVar2;
                                      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = lVar11;
                                      lVar11 = FUN_02f0880c(uVar12,3);
                                      if (lVar11 == 0) goto LAB_05de9f2c;
                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                      if (((uVar1 != 0) &&
                                          (*(undefined8 *)(lVar11 + 0x20) =
                                                *(undefined8 *)
                                                 Method_System_Runtime_InteropServices_SafeHandle_DangerousAddRef__
                                          , uVar1 != 1)) &&
                                         (*(undefined8 *)(lVar11 + 0x28) =
                                               *(undefined8 *)
                                                Method_Unity_AppUI_UI_SVSquare_OnPointerDown__,
                                         puVar7 = Method_Unity_AppUI_UI_SVSquare_OnPointerFocusIn__,
                                         puVar5 = 
                                         Method_System_SByte_System_IConvertible_ToDateTime__,
                                         puVar2 = Method_System_SByte_Parse__, 2 < uVar1)) {
                                        *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)puVar3;
                                        puVar9 = 
                                        Method_System_Runtime_InteropServices_SafeHandle_InternalDispose__
                                        ;
                                        puVar8 = Method_Unity_AppUI_UI_SVSquare_OnPointerMove__;
                                        puVar6 = 
                                        Method_Unity_AppUI_UI_SVSquare_OnDetachedFromPanel__;
                                        puVar3 = Method_System_Data_DataTableCollection_BaseAdd__;
                                        lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
                                        uVar16 = *(undefined8 *)puVar7;
                                        uVar12 = *(undefined8 *)puVar2;
                                        uVar15 = *(undefined8 *)puVar5;
                                        *(long *)(lVar13 + 0x18) = lVar11;
                                        *(undefined8 *)(lVar13 + 0x28) = uVar16;
                                        *(undefined8 *)(lVar13 + 0x30) = uVar12;
                                        uVar12 = *(undefined8 *)puVar8;
                                        uVar14 = *(undefined8 *)puVar6;
                                        *(undefined2 *)(lVar13 + 0x20) = 0xffff;
                                        *(undefined8 *)(lVar13 + 0x38) = uVar15;
                                        *(undefined8 *)(lVar13 + 0x40) = uVar12;
                                        puVar2 = Method_Unity_AppUI_UI_SVSquare_OnKeyboardFocusIn__;
                                        uVar15 = *(undefined8 *)puVar9;
                                        uVar12 = *(undefined8 *)puVar3;
                                        *(undefined8 *)(lVar13 + 0x48) = uVar14;
                                        *(undefined8 *)(lVar13 + 0x50) = uVar15;
                                        *(undefined4 *)(lVar13 + 0x58) = 0x3f87c409;
                                        uVar12 = thunk_FUN_02f45270(uVar12);
                                        FUN_05c5c73c(uVar12,uVar16,0);
                                        uVar15 = *(undefined8 *)puVar3;
                                        uVar14 = *(undefined8 *)
                                                  (*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
                                        *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60) =
                                             uVar12;
                                        uVar12 = thunk_FUN_02f45270(uVar15);
                                        FUN_05c5c73c(uVar12,uVar14,0);
                                        uVar15 = *(undefined8 *)puVar3;
                                        uVar14 = *(undefined8 *)
                                                  (*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
                                        *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68) =
                                             uVar12;
                                        uVar12 = thunk_FUN_02f45270(uVar15);
                                        FUN_05c5c73c(uVar12,uVar14,0);
                                        uVar15 = *(undefined8 *)puVar3;
                                        *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70) =
                                             uVar12;
                                        uVar12 = thunk_FUN_02f45270(uVar15);
                                        FUN_05c5c73c(uVar12,*(undefined8 *)puVar2,0);
                                        *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78) =
                                             uVar12;
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
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
LAB_05de9f2c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


