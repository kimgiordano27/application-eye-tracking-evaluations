/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorReticleVisual$$FindClosestHit
ENTRY_POINT: 06bf4a18
PROGRAM: vandalizer-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


undefined1  [16]
UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_XRInteractorReticleVisual__FindClosestHit
          (void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  int iVar12;
  long unaff_x25;
  long *unaff_x26;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  char cStack0000000000000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  FUN_031f20f4();
  FUN_031f20f4(System_Action<TapGesture>_TypeInfo);
  *(undefined1 *)(unaff_x25 + 0xf9d) = 1;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000078 = 0;
  _cStack0000000000000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
                    /* try { // try from 06bf4a50 to 06cf4a7f has its CatchHandler @ 06bf4ad4 */
  uVar8 = FUN_06bf4dbc();
  if ((uVar8 & 1) == 0) goto LAB_06bf4c90;
  if (unaff_x22 != 0) {
    lVar9 = FUN_06be77ec();
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x26);
    }
                    /* try { // try from 06bf4a80 to 06cf4abb has its CatchHandler @ 06bf4900 */
    if ((lVar9 != 0) &&
       (lVar9 = FUN_058137c8(lVar9,*(undefined8 *)(*(long *)(*unaff_x26 + 0xb8) + 0x20),
                             *(undefined8 *)
                              System_Action<AsyncOperationHandle<ContentCatalogData>>_TypeInfo),
       lVar9 != 0)) {
      uVar10 = FUN_06be575c();
      puVar6 = System_Action<TapGesture>_TypeInfo;
                    /* try { // try from 06bf4abc to 06cf4abf has its CatchHandler @ 06bf4acc */
                    /* try { // try from 06bf4ac0 to 06cf4aeb has its CatchHandler @ 06bf4900 */
      if (*(int *)(*(long *)System_Action<TapGesture>_TypeInfo + 0xe4) == 0) {
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06bf4a08 with catch @ 06bf4ac4
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06bf4a10 with catch @ 06bf4ac8
                        */
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                  (*(long *)System_Action<TapGesture>_TypeInfo);
      }
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06bf4abc with catch @ 06bf4acc
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06bf49e4 with catch @ 06bf4ad0
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 06bf4a50 with catch @ 06bf4ad4
                        */
      FUN_06bf3c64(&stack0x00000030);
      puVar5 = System_Action<Tab>_TypeInfo;
      in_stack_00000078 = in_stack_00000038;
      _cStack0000000000000070 = in_stack_00000030;
      uVar2 = _cStack0000000000000070;
      in_stack_00000088 = in_stack_00000048;
      in_stack_00000080 = in_stack_00000040;
      cStack0000000000000070 = (char)in_stack_00000030;
      bVar1 = cStack0000000000000070 != '\0';
      _cStack0000000000000070 = uVar2;
      if (bVar1) {
                    /* try { // try from 06bf4aec to 06cf4aef has its CatchHandler @ 06bf4b10 */
                    /* try { // try from 06bf4af0 to 06cf4b17 has its CatchHandler @ 06bf4900 */
        FUN_054305d0(&stack0x00000030,&stack0x00000070,*(undefined8 *)System_Action<Tab>_TypeInfo);
        uVar8 = FUN_05c86f74(in_stack_00000038,uVar10,0);
        puVar4 = PTR_DAT_075d8458;
        if ((uVar8 & 1) != 0) {
          lVar9 = *(long *)PTR_DAT_075d8458;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar9 = *(long *)puVar4;
          }
          uVar2 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8);
          uVar3 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x10);
          FUN_054305d0(&stack0x00000018,&stack0x00000070,*(undefined8 *)puVar5);
          in_stack_00000038 = in_stack_00000020;
          in_stack_00000030 = in_stack_00000018;
          in_stack_00000040 = in_stack_00000028;
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          auVar13 = FUN_06bf4e6c(uVar10);
          auVar13 = FUN_06be4a00(uVar2,uVar3,auVar13._0_8_,auVar13._8_8_);
          puVar6 = System_Action<VFXOutputEventArgs>_TypeInfo;
          if ((auVar13._0_8_ & 0xff) == 0) {
UnityEngine_XR_Interaction_Toolkit_Interactors_Casters_CurveInteractionCaster__get_castDistance:
            uVar10 = FUN_06bf2498();
            *unaff_x19 = uVar10;
            thunk_FUN_0329bf60();
            return auVar13;
          }
          if (in_stack_00000068 != 0) {
            FUN_048a0a8c(&stack0x00000030,in_stack_00000068,0,
                         *(undefined8 *)System_Action<VFXOutputEventArgs>_TypeInfo);
            auVar14 = FUN_06bf5184();
            if (*(int *)(*(long *)PTR_DAT_075d8458 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            auVar13 = FUN_06be4a00(auVar13._0_8_,auVar13._8_8_,auVar14._0_8_,auVar14._8_8_);
            if ((auVar13._0_8_ & 0xff) == 0) {
              return auVar13;
            }
            if (in_stack_00000068 != 0) {
              iVar12 = 1;
              do {
                puVar5 = OVRVirtualKeyboard_VirtualKeyboardTextureInfo_var;
                if (*(int *)(in_stack_00000068 + 0x18) <= iVar12) {
                  if (*(int *)(*(long *)OVRVirtualKeyboard_VirtualKeyboardTextureInfo_var + 0xe4) ==
                      0) {
                    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                  }
                  uVar8 = FUN_06bf55bc();
                  if ((uVar8 & 1) != 0) {
                    lVar9 = FUN_06be77ec();
                    lVar11 = *(long *)puVar5;
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar11);
                    }
                    if ((lVar9 == 0) ||
                       (lVar9 = FUN_058137c8(lVar9,*(undefined8 *)
                                                    (*(long *)(*(long *)puVar5 + 0xb8) + 0x10),
                                             *(undefined8 *)
                                              System_Action<AsyncOperationHandle<ContentCatalogData>>_TypeInfo
                                            ), lVar9 == 0)) break;
                    uVar10 = FUN_06be575c();
                    uVar7 = FUN_05dff160(uVar10,0);
                    if (*(long *)(unaff_x20 + 0x28) == 0) break;
                    FUN_06bf566c(*(long *)(unaff_x20 + 0x28),uVar7,*unaff_x21);
                  }
                  _in_stack_00000030 = auVar13;
                  uVar10 = thunk_FUN_0322ed78(*(undefined8 *)PTR_DAT_075d8458,&stack0x00000030);
                  thunk_FUN_03202440(uVar10,0);
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Interactors_Casters_CurveInteractionCaster__get_castDistance
                  ;
                }
                FUN_048a0a8c(&stack0x00000030,in_stack_00000068,iVar12,*(undefined8 *)puVar6);
                in_stack_00000058 = in_stack_00000038;
                in_stack_00000050 = in_stack_00000030;
                in_stack_00000060 = in_stack_00000040;
                uVar10 = FUN_06bf5508(&stack0x00000050,*unaff_x21);
                *unaff_x21 = uVar10;
                thunk_FUN_0329bf60();
                iVar12 = iVar12 + 1;
              } while (in_stack_00000068 != 0);
            }
          }
          goto 
          UnityEngine_XR_Interaction_Toolkit_Interactors_Casters_CurveInteractionCaster__set_sphereCastRadius
          ;
        }
      }
LAB_06bf4c90:
      auVar13 = FUN_06bf5184();
      return auVar13;
    }
  }
UnityEngine_XR_Interaction_Toolkit_Interactors_Casters_CurveInteractionCaster__set_sphereCastRadius:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


