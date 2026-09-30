/*
FUNCTION_NAME: FUN_05d75638
ENTRY_POINT: 05d75638
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_18;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05d75638(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4 [4];
  undefined4 local_a0;
  undefined1 local_9c [4];
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_58;
  undefined4 local_54;
  
  puVar3 = PTR_DAT_06313630;
  puVar2 = PTR_DAT_06313048;
  if ((DAT_066db914 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313ca0);
    FUN_02b3c81c(Method_UnityEngine_Texture2D_ReadPixels__);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(PTR_DAT_0631ec58);
    FUN_02b3c81c(PTR_DAT_06313630);
    FUN_02b3c81c(Method_System_UnitySerializationHolder__ctor__);
    FUN_02b3c81c(Method_UnityEngine_Texture2D_SetPixels__);
    FUN_02b3c81c(Method_System_UnitySerializationHolder_GetObjectData__);
    FUN_02b3c81c(Method_System_UnitySerializationHolder_GetRealObject__);
    FUN_02b3c81c(Method_System_UnitySerializationHolder_ThrowInsufficientInformation__);
    FUN_02b3c81c(Method_UnityEngine_Texture2DArray_ValidateIsNotCrunched__);
    FUN_02b3c81c(Method_Unity_Services_Core_Internal_UnityServicesInitializer_CreateInstance__);
    FUN_02b3c81c(Method_UnityEngine_Texture3D_GetPixelData<ValueTuple<byte,_byte,_byte,_byte>>__);
    FUN_02b3c81c(Method_Mono_Unity_UnityTlsContext_CertificateCallback__);
    FUN_02b3c81c(Method_Mono_Unity_UnityTlsContext_CertificateCallback__);
    FUN_02b3c81c(Method_Mono_Unity_UnityTlsContext_ExtractNativeKeyAndChainFromManagedCertificate__)
    ;
    FUN_02b3c81c(Method_Mono_Unity_UnityTlsContext_ProcessHandshake__);
    FUN_02b3c81c(Method_UnityEngine_Texture3D_SetPixel__);
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_RenderGraphModule_TextureDesc_CalculateFinalDimensions__
                );
    FUN_02b3c81c(Method_Mono_Unity_UnityTlsContext_Read__);
    FUN_02b3c81c(Method_Mono_Unity_UnityTlsContext_ReadCallback__);
    FUN_02b3c81c(Method_Mono_Unity_UnityTlsContext_Renegotiate__);
    FUN_02b3c81c(Method_Mono_Unity_UnityTlsContext_VerifyCallback__);
                    /* try { // try from 05d7578c to 05e757e7 has its CatchHandler @ 05d7578c
                       catch() { ... } // from try @ 05d7578c with catch @ 05d7578c
                       catch() { ... } // from try @ 05d758a0 with catch @ 05d7578c
                       catch() { ... } // from try @ 05d758d4 with catch @ 05d7578c */
    FUN_02b3c81c(Method_Mono_Unity_UnityTlsContext_Write__);
    FUN_02b3c81c(Method_Mono_Unity_UnityTlsContext_WriteCallback__);
    FUN_02b3c81c(Method_Mono_Unity_UnityTlsProvider_x509verify_callback__);
    FUN_02b3c81c(Method_UnityEngine_Networking_UnityWebRequest_InternalSetCustomMethod__);
    FUN_02b3c81c(PTR_DAT_063212b8);
    FUN_02b3c81c(Method_System_Threading_Thread_StartInternal__);
    FUN_02b3c81c(Method_System_Threading_ThreadHelper_ThreadStart__);
    FUN_02b3c81c(Method_TMPro_TMP_TextProcessingStack<FontWeight>_SetDefault__);
                    /* try { // try from 05d757e8 to 05e75807 has its CatchHandler @ 05d758b8 */
    FUN_02b3c81c(Method_System_Threading_ThreadPool_QueueUserWorkItem<object>__);
    FUN_02b3c81c(Method_System_Threading_ThreadPool_UnsafeQueueUserWorkItem<object>__);
    DAT_066db914 = 1;
  }
  lVar7 = FUN_02b3c908(*(undefined8 *)puVar3,5);
                    /* try { // try from 05d7581c to 05e75827 has its CatchHandler @ 05d758b4 */
  plVar8 = (long *)FUN_02b3c908(*(undefined8 *)puVar2,6);
  puVar3 = PTR_DAT_063212b8;
  if (plVar8 == (long *)0x0) goto LAB_05d764d0;
                    /* try { // try from 05d7582c to 05e75837 has its CatchHandler @ 05d758b0 */
                    /* try { // try from 05d75844 to 05e7586f has its CatchHandler @ 05d758bc */
  if ((*(long *)PTR_DAT_063212b8 != 0) &&
     (lVar9 = thunk_FUN_02b79548(*(long *)PTR_DAT_063212b8,*(undefined8 *)(*plVar8 + 0x40)),
     lVar9 == 0)) {
LAB_05d764c4:
    uVar11 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar11,0);
  }
  if ((int)plVar8[3] != 0) {
    plVar8[4] = *(long *)puVar3;
    thunk_FUN_02bb0e9c();
    lVar9 = FUN_05d74d7c(param_1);
                    /* try { // try from 05d75884 to 05e7589f has its CatchHandler @ 05d758c0 */
    if ((lVar9 != 0) &&
       (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
    goto LAB_05d764c4;
    puVar3 = Method_Unity_Services_Core_Internal_UnityServicesInitializer_CreateInstance__;
    if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
                    /* try { // try from 05d758a0 to 05e758cf has its CatchHandler @ 05d7578c */
      plVar8[5] = lVar9;
      thunk_FUN_02bb0e9c(plVar8 + 5,lVar9);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05d7582c with catch @ 05d758b0
                        */
      lVar9 = *(long *)puVar3;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05d7581c with catch @ 05d758b4
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05d757e8 with catch @ 05d758b8
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05d75844 with catch @ 05d758bc
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05d75884 with catch @ 05d758c0
                        */
      if ((lVar9 != 0) &&
         (lVar9 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto LAB_05d764c4;
      puVar5 = PTR_DAT_0631ec58;
                    /* try { // try from 05d758d0 to 05e758d3 has its CatchHandler @ 05d758e0 */
      if (2 < *(uint *)(plVar8 + 3)) {
                    /* try { // try from 05d758d4 to 05e758e7 has its CatchHandler @ 05d7578c */
                    /* catch() { ... } // from try @ 05d758d0 with catch @ 05d758e0 */
        plVar8[6] = *(long *)puVar3;
                    /* try { // try from 05d758e8 to 05e758ef has its CatchHandler @ 05d758f0 */
        thunk_FUN_02bb0e9c();
        uStack_68 = *(undefined8 *)(param_1 + 0x40);
        local_70 = *(undefined8 *)(param_1 + 0x38);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d758e8 with catch @ 05d758f0
                        */
        lVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)puVar5,&local_70);
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_05d764c4;
        puVar3 = Method_System_Threading_ThreadHelper_ThreadStart__;
        if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
          plVar8[7] = lVar9;
          thunk_FUN_02bb0e9c(plVar8 + 7,lVar9);
          lVar9 = *(long *)puVar3;
          if ((lVar9 != 0) &&
             (lVar9 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
          goto LAB_05d764c4;
          if (4 < *(uint *)(plVar8 + 3)) {
            plVar8[8] = *(long *)puVar3;
            thunk_FUN_02bb0e9c();
            lVar9 = *(long *)(param_1 + 0x48);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
            goto LAB_05d764c4;
            puVar3 = Method_Mono_Unity_UnityTlsContext_Read__;
            if (5 < *(uint *)(plVar8 + 3)) {
              plVar8[9] = lVar9;
              thunk_FUN_02bb0e9c(plVar8 + 9,lVar9);
              uVar11 = FUN_04c0afb0(*(undefined8 *)puVar3,plVar8,0);
              if (lVar7 == 0) {
LAB_05d764d0:
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(int *)(lVar7 + 0x18) != 0) {
                *(undefined8 *)(lVar7 + 0x20) = uVar11;
                thunk_FUN_02bb0e9c();
                plVar8 = (long *)FUN_02b3c908(*(undefined8 *)puVar2,10);
                puVar3 = 
                Method_UnityEngine_Rendering_RenderGraphModule_TextureDesc_CalculateFinalDimensions__
                ;
                if (plVar8 == (long *)0x0) goto LAB_05d764d0;
                if ((*(long *)
                      Method_UnityEngine_Rendering_RenderGraphModule_TextureDesc_CalculateFinalDimensions__
                     != 0) &&
                   (lVar9 = thunk_FUN_02b79548(*(long *)
                                                Method_UnityEngine_Rendering_RenderGraphModule_TextureDesc_CalculateFinalDimensions__
                                               ,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                goto LAB_05d764c4;
                puVar5 = Method_UnityEngine_Texture2D_ReadPixels__;
                if ((int)plVar8[3] != 0) {
                  plVar8[4] = *(long *)puVar3;
                  thunk_FUN_02bb0e9c();
                  local_54 = *(undefined4 *)(param_1 + 0x50);
                  lVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                    (*(undefined8 *)puVar5,&local_54);
                  if ((lVar9 != 0) &&
                     (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar10 == 0)) goto LAB_05d764c4;
                  puVar3 = Method_UnityEngine_Texture2DArray_ValidateIsNotCrunched__;
                  if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
                    plVar8[5] = lVar9;
                    thunk_FUN_02bb0e9c(plVar8 + 5,lVar9);
                    lVar9 = *(long *)puVar3;
                    if ((lVar9 != 0) &&
                       (lVar9 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar9 == 0)) goto LAB_05d764c4;
                    if (2 < *(uint *)(plVar8 + 3)) {
                      plVar8[6] = *(long *)puVar3;
                      thunk_FUN_02bb0e9c();
                      lVar9 = *(long *)(param_1 + 0x58);
                      if ((lVar9 != 0) &&
                         (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar10 == 0)) goto LAB_05d764c4;
                      puVar3 = Method_Mono_Unity_UnityTlsContext_CertificateCallback__;
                      if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
                        plVar8[7] = lVar9;
                        thunk_FUN_02bb0e9c(plVar8 + 7,lVar9);
                        lVar9 = *(long *)puVar3;
                        if ((lVar9 != 0) &&
                           (lVar9 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar9 == 0)) goto LAB_05d764c4;
                        puVar5 = Method_System_UnitySerializationHolder__ctor__;
                        if (4 < *(uint *)(plVar8 + 3)) {
                          plVar8[8] = *(long *)puVar3;
                          thunk_FUN_02bb0e9c();
                          local_58 = *(undefined4 *)(param_1 + 0x60);
                          lVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                            (*(undefined8 *)puVar5,&local_58);
                          if ((lVar9 != 0) &&
                             (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                             lVar10 == 0)) goto LAB_05d764c4;
                          puVar3 = Method_Mono_Unity_UnityTlsContext_CertificateCallback__;
                          if (5 < *(uint *)(plVar8 + 3)) {
                            plVar8[9] = lVar9;
                            thunk_FUN_02bb0e9c(plVar8 + 9,lVar9);
                            lVar9 = *(long *)puVar3;
                            if ((lVar9 != 0) &&
                               (lVar9 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar8 + 0x40)),
                               lVar9 == 0)) goto LAB_05d764c4;
                            puVar5 = Method_System_UnitySerializationHolder_GetObjectData__;
                            if (6 < *(uint *)(plVar8 + 3)) {
                              plVar8[10] = *(long *)puVar3;
                              thunk_FUN_02bb0e9c();
                              local_74 = *(undefined4 *)(param_1 + 100);
                              lVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                (*(undefined8 *)puVar5,&local_74);
                              if ((lVar9 != 0) &&
                                 (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar8 + 0x40))
                                 , lVar10 == 0)) goto LAB_05d764c4;
                              puVar3 = Method_Mono_Unity_UnityTlsContext_WriteCallback__;
                              if ((*(uint *)(plVar8 + 3) & 0xfffffff8) != 0) {
                                plVar8[0xb] = lVar9;
                                thunk_FUN_02bb0e9c(plVar8 + 0xb,lVar9);
                                if ((*(long *)puVar3 != 0) &&
                                   (lVar9 = thunk_FUN_02b79548(*(long *)puVar3,
                                                               *(undefined8 *)(*plVar8 + 0x40)),
                                   lVar9 == 0)) goto LAB_05d764c4;
                                puVar5 = Method_System_UnitySerializationHolder_GetRealObject__;
                                if (8 < *(uint *)(plVar8 + 3)) {
                                  plVar8[0xc] = *(long *)puVar3;
                                  thunk_FUN_02bb0e9c();
                                  local_78 = *(undefined4 *)(param_1 + 0x98);
                                  lVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                    (*(undefined8 *)puVar5,&local_78);
                                  if ((lVar9 != 0) &&
                                     (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)
                                                                         (*plVar8 + 0x40)),
                                     lVar10 == 0)) goto LAB_05d764c4;
                                  puVar6 = 
                                  Method_System_UnitySerializationHolder_ThrowInsufficientInformation__
                                  ;
                                  if (9 < *(uint *)(plVar8 + 3)) {
                                    plVar8[0xd] = lVar9;
                                    thunk_FUN_02bb0e9c(plVar8 + 0xd,lVar9);
                                    uVar11 = FUN_04c0afb0(*(undefined8 *)puVar6,plVar8,0);
                                    if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                                      *(undefined8 *)(lVar7 + 0x28) = uVar11;
                                      thunk_FUN_02bb0e9c();
                                      plVar8 = (long *)FUN_02b3c908(*(undefined8 *)puVar2,10);
                                      puVar1 = 
                                      Method_TMPro_TMP_TextProcessingStack<FontWeight>_SetDefault__;
                                      if (plVar8 == (long *)0x0) goto LAB_05d764d0;
                                      if ((*(long *)
                                            Method_TMPro_TMP_TextProcessingStack<FontWeight>_SetDefault__
                                           != 0) &&
                                         (lVar9 = thunk_FUN_02b79548(*(long *)
                                                  Method_TMPro_TMP_TextProcessingStack<FontWeight>_SetDefault__
                                                  ,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                      goto LAB_05d764c4;
                                      puVar4 = PTR_DAT_06313ca0;
                                      if ((int)plVar8[3] != 0) {
                                        plVar8[4] = *(long *)puVar1;
                                        thunk_FUN_02bb0e9c();
                                        uStack_88 = *(undefined8 *)(param_1 + 0x70);
                                        local_90 = *(undefined8 *)(param_1 + 0x68);
                                        lVar9 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                          (*(undefined8 *)puVar4,&local_90);
                                        if ((lVar9 != 0) &&
                                           (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)
                                                                               (*plVar8 + 0x40)),
                                           lVar10 == 0)) goto LAB_05d764c4;
                                        puVar1 = Method_System_Threading_Thread_StartInternal__;
                                        if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
                                          plVar8[5] = lVar9;
                                          thunk_FUN_02bb0e9c(plVar8 + 5,lVar9);
                                          lVar9 = *(long *)puVar1;
                                          if ((lVar9 != 0) &&
                                             (lVar9 = thunk_FUN_02b79548(lVar9,*(undefined8 *)
                                                                                (*plVar8 + 0x40)),
                                             lVar9 == 0)) goto LAB_05d764c4;
                                          if (2 < *(uint *)(plVar8 + 3)) {
                                            plVar8[6] = *(long *)puVar1;
                                            thunk_FUN_02bb0e9c();
                                            puVar1 = PTR_DAT_06312310;
                                            local_94 = *(undefined4 *)(param_1 + 0x7c);
                                            lVar9 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)
                                                              (PTR_DAT_06312310 + 0x48),&local_94);
                                            if ((lVar9 != 0) &&
                                               (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)
                                                                                   (*plVar8 + 0x40))
                                               , lVar10 == 0)) goto LAB_05d764c4;
                                            puVar4 = Method_Mono_Unity_UnityTlsContext_Write__;
                                            if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
                                              plVar8[7] = lVar9;
                                              thunk_FUN_02bb0e9c(plVar8 + 7,lVar9);
                                              lVar9 = *(long *)puVar4;
                                              if ((lVar9 != 0) &&
                                                 (lVar9 = thunk_FUN_02b79548(lVar9,*(undefined8 *)
                                                                                    (*plVar8 + 0x40)
                                                                            ), lVar9 == 0))
                                              goto LAB_05d764c4;
                                              if (4 < *(uint *)(plVar8 + 3)) {
                                                plVar8[8] = *(long *)puVar4;
                                                thunk_FUN_02bb0e9c();
                                                local_98[0] = *(undefined1 *)(param_1 + 0x81);
                                                lVar9 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)(puVar1 + 0x28),local_98
                                                            );
                                                if ((lVar9 != 0) &&
                                                   (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *
                                                                                       )(*plVar8 +
                                                                                        0x40)),
                                                   lVar10 == 0)) goto LAB_05d764c4;
                                                puVar4 = 
                                                Method_Mono_Unity_UnityTlsContext_ExtractNativeKeyAndChainFromManagedCertificate__
                                                ;
                                                if (5 < *(uint *)(plVar8 + 3)) {
                                                  plVar8[9] = lVar9;
                                                  thunk_FUN_02bb0e9c(plVar8 + 9,lVar9);
                                                  lVar9 = *(long *)puVar4;
                                                  if ((lVar9 != 0) &&
                                                     (lVar9 = thunk_FUN_02b79548(lVar9,*(undefined8
                                                                                         *)(*plVar8 
                                                  + 0x40)), lVar9 == 0)) goto LAB_05d764c4;
                                                  if (6 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[10] = *(long *)puVar4;
                                                    thunk_FUN_02bb0e9c();
                                                    local_9c[0] = *(undefined1 *)(param_1 + 0x82);
                                                    lVar9 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)(puVar1 + 0x28),local_9c
                                                            );
                                                  if ((lVar9 != 0) &&
                                                     (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8
                                                                                          *)(*plVar8
                                                                                            + 0x40))
                                                     , lVar10 == 0)) goto LAB_05d764c4;
                                                  puVar4 = 
                                                  Method_Mono_Unity_UnityTlsProvider_x509verify_callback__
                                                  ;
                                                  if ((*(uint *)(plVar8 + 3) & 0xfffffff8) != 0) {
                                                    plVar8[0xb] = lVar9;
                                                    thunk_FUN_02bb0e9c(plVar8 + 0xb,lVar9);
                                                    lVar9 = *(long *)puVar4;
                                                    if ((lVar9 != 0) &&
                                                       (lVar9 = thunk_FUN_02b79548(lVar9,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05d764c4;
                                                  if (8 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0xc] = *(long *)puVar4;
                                                    thunk_FUN_02bb0e9c();
                                                    local_a0 = *(undefined4 *)(param_1 + 0x84);
                                                    lVar9 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)(puVar1 + 0x78),
                                                             &local_a0);
                                                  if ((lVar9 != 0) &&
                                                     (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8
                                                                                          *)(*plVar8
                                                                                            + 0x40))
                                                     , lVar10 == 0)) goto LAB_05d764c4;
                                                  if (9 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[0xd] = lVar9;
                                                    thunk_FUN_02bb0e9c(plVar8 + 0xd,lVar9);
                                                    uVar11 = FUN_04c0afb0(*(undefined8 *)puVar6,
                                                                          plVar8,0);
                                                    if (2 < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0x30) = uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                      plVar8 = (long *)FUN_02b3c908(*(undefined8 *)
                                                                                     puVar2,8);
                                                      puVar6 = 
                                                  Method_Mono_Unity_UnityTlsContext_ReadCallback__;
                                                  if (plVar8 == (long *)0x0) goto LAB_05d764d0;
                                                  if ((*(long *)
                                                  Method_Mono_Unity_UnityTlsContext_ReadCallback__
                                                  != 0) && (lVar9 = thunk_FUN_02b79548(*(long *)
                                                  Method_Mono_Unity_UnityTlsContext_ReadCallback__,
                                                  *(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05d764c4;
                                                  if ((int)plVar8[3] != 0) {
                                                    plVar8[4] = *(long *)puVar6;
                                                    thunk_FUN_02bb0e9c();
                                                    local_a4[0] = *(undefined1 *)(param_1 + 0x88);
                                                    lVar9 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)(puVar1 + 0x28),local_a4
                                                            );
                                                  if ((lVar9 != 0) &&
                                                     (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8
                                                                                          *)(*plVar8
                                                                                            + 0x40))
                                                     , lVar10 == 0)) goto LAB_05d764c4;
                                                  puVar6 = Method_UnityEngine_Texture3D_SetPixel__;
                                                  if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
                                                    plVar8[5] = lVar9;
                                                    thunk_FUN_02bb0e9c(plVar8 + 5,lVar9);
                                                    lVar9 = *(long *)puVar6;
                                                    if ((lVar9 != 0) &&
                                                       (lVar9 = thunk_FUN_02b79548(lVar9,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05d764c4;
                                                  if (2 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[6] = *(long *)puVar6;
                                                    thunk_FUN_02bb0e9c();
                                                    local_a8 = *(undefined4 *)(param_1 + 0x8c);
                                                    lVar9 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)(puVar1 + 0x78),
                                                             &local_a8);
                                                  if ((lVar9 != 0) &&
                                                     (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8
                                                                                          *)(*plVar8
                                                                                            + 0x40))
                                                     , lVar10 == 0)) goto LAB_05d764c4;
                                                  puVar6 = 
                                                  Method_UnityEngine_Texture3D_GetPixelData<ValueTuple<byte,_byte,_byte,_byte>>__
                                                  ;
                                                  if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
                                                    plVar8[7] = lVar9;
                                                    thunk_FUN_02bb0e9c(plVar8 + 7,lVar9);
                                                    lVar9 = *(long *)puVar6;
                                                    if ((lVar9 != 0) &&
                                                       (lVar9 = thunk_FUN_02b79548(lVar9,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05d764c4;
                                                  if (4 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[8] = *(long *)puVar6;
                                                    thunk_FUN_02bb0e9c();
                                                    local_ac = *(undefined4 *)(param_1 + 0x90);
                                                    lVar9 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)(puVar1 + 0x78),
                                                             &local_ac);
                                                  if ((lVar9 != 0) &&
                                                     (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8
                                                                                          *)(*plVar8
                                                                                            + 0x40))
                                                     , lVar10 == 0)) goto LAB_05d764c4;
                                                  puVar6 = 
                                                  Method_System_Threading_ThreadPool_QueueUserWorkItem<object>__
                                                  ;
                                                  if (5 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[9] = lVar9;
                                                    thunk_FUN_02bb0e9c(plVar8 + 9,lVar9);
                                                    lVar9 = *(long *)puVar6;
                                                    if ((lVar9 != 0) &&
                                                       (lVar9 = thunk_FUN_02b79548(lVar9,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05d764c4;
                                                  if (6 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[10] = *(long *)puVar6;
                                                    thunk_FUN_02bb0e9c();
                                                    local_b0 = *(undefined4 *)(param_1 + 0x94);
                                                    lVar9 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)(puVar1 + 0x78),
                                                             &local_b0);
                                                  if ((lVar9 != 0) &&
                                                     (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8
                                                                                          *)(*plVar8
                                                                                            + 0x40))
                                                     , lVar10 == 0)) goto LAB_05d764c4;
                                                  puVar6 = 
                                                  Method_UnityEngine_Networking_UnityWebRequest_InternalSetCustomMethod__
                                                  ;
                                                  if ((*(uint *)(plVar8 + 3) & 0xfffffff8) != 0) {
                                                    plVar8[0xb] = lVar9;
                                                    thunk_FUN_02bb0e9c(plVar8 + 0xb,lVar9);
                                                    uVar11 = FUN_04c0afb0(*(undefined8 *)puVar6,
                                                                          plVar8,0);
                                                    if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0)
                                                    {
                                                      *(undefined8 *)(lVar7 + 0x38) = uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                      plVar8 = (long *)FUN_02b3c908(*(undefined8 *)
                                                                                     puVar2,8);
                                                      if (plVar8 == (long *)0x0) goto LAB_05d764d0;
                                                      if ((*(long *)puVar3 != 0) &&
                                                         (lVar9 = thunk_FUN_02b79548(*(long *)puVar3
                                                                                     ,*(undefined8 *
                                                                                       )(*plVar8 +
                                                                                        0x40)),
                                                         lVar9 == 0)) goto LAB_05d764c4;
                                                      if ((int)plVar8[3] != 0) {
                                                        plVar8[4] = *(long *)puVar3;
                                                        thunk_FUN_02bb0e9c();
                                                        local_b4 = *(undefined4 *)(param_1 + 0x98);
                                                        lVar9 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)puVar5,&local_b4);
                                                  if ((lVar9 != 0) &&
                                                     (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8
                                                                                          *)(*plVar8
                                                                                            + 0x40))
                                                     , lVar10 == 0)) goto LAB_05d764c4;
                                                  puVar2 = 
                                                  Method_System_Threading_ThreadPool_UnsafeQueueUserWorkItem<object>__
                                                  ;
                                                  if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
                                                    plVar8[5] = lVar9;
                                                    thunk_FUN_02bb0e9c(plVar8 + 5,lVar9);
                                                    lVar9 = *(long *)puVar2;
                                                    if ((lVar9 != 0) &&
                                                       (lVar9 = thunk_FUN_02b79548(lVar9,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05d764c4;
                                                  puVar3 = Method_UnityEngine_Texture2D_SetPixels__;
                                                  if (2 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[6] = *(long *)puVar2;
                                                    thunk_FUN_02bb0e9c();
                                                    local_b8 = *(undefined4 *)(param_1 + 0x9c);
                                                    lVar9 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)puVar3,&local_b8);
                                                  if ((lVar9 != 0) &&
                                                     (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8
                                                                                          *)(*plVar8
                                                                                            + 0x40))
                                                     , lVar10 == 0)) goto LAB_05d764c4;
                                                  puVar2 = 
                                                  Method_Mono_Unity_UnityTlsContext_ProcessHandshake__
                                                  ;
                                                  if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
                                                    plVar8[7] = lVar9;
                                                    thunk_FUN_02bb0e9c(plVar8 + 7,lVar9);
                                                    lVar9 = *(long *)puVar2;
                                                    if ((lVar9 != 0) &&
                                                       (lVar9 = thunk_FUN_02b79548(lVar9,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05d764c4;
                                                  if (4 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[8] = *(long *)puVar2;
                                                    thunk_FUN_02bb0e9c();
                                                    local_bc[0] = *(undefined1 *)(param_1 + 0x78);
                                                    lVar9 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)(puVar1 + 0x28),local_bc
                                                            );
                                                  if ((lVar9 != 0) &&
                                                     (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8
                                                                                          *)(*plVar8
                                                                                            + 0x40))
                                                     , lVar10 == 0)) goto LAB_05d764c4;
                                                  puVar2 = 
                                                  Method_Mono_Unity_UnityTlsContext_Renegotiate__;
                                                  if (5 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[9] = lVar9;
                                                    thunk_FUN_02bb0e9c(plVar8 + 9,lVar9);
                                                    lVar9 = *(long *)puVar2;
                                                    if ((lVar9 != 0) &&
                                                       (lVar9 = thunk_FUN_02b79548(lVar9,*(
                                                  undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
                                                  goto LAB_05d764c4;
                                                  if (6 < *(uint *)(plVar8 + 3)) {
                                                    plVar8[10] = *(long *)puVar2;
                                                    thunk_FUN_02bb0e9c();
                                                    local_c0[0] = *(undefined1 *)(param_1 + 0x89);
                                                    lVar9 = 
                                                  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                                            (*(undefined8 *)(puVar1 + 0x28),local_c0
                                                            );
                                                  if ((lVar9 != 0) &&
                                                     (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8
                                                                                          *)(*plVar8
                                                                                            + 0x40))
                                                     , lVar10 == 0)) goto LAB_05d764c4;
                                                  puVar2 = 
                                                  Method_Mono_Unity_UnityTlsContext_VerifyCallback__
                                                  ;
                                                  if ((*(uint *)(plVar8 + 3) & 0xfffffff8) != 0) {
                                                    plVar8[0xb] = lVar9;
                                                    thunk_FUN_02bb0e9c(plVar8 + 0xb,lVar9);
                                                    uVar11 = FUN_04c0afb0(*(undefined8 *)puVar2,
                                                                          plVar8,0);
                                                    if (4 < *(uint *)(lVar7 + 0x18)) {
                                                      *(undefined8 *)(lVar7 + 0x40) = uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                      FUN_04c0ac30(lVar7,0);
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
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


