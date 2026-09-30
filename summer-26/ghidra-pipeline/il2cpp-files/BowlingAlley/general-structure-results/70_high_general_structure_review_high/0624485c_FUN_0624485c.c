/*
FUNCTION_NAME: FUN_0624485c
ENTRY_POINT: 0624485c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_12;ui_or_gameplay_sink_hits_6
*/


void FUN_0624485c(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_072a1998;
  if ((DAT_076de0f0 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072794b0);
    thunk_FUN_032e1da0(PTR_DAT_072a1998);
    thunk_FUN_032e1da0(GLTFast_PrimitiveCreateContextBase___TypeInfo);
    thunk_FUN_032e1da0(Unity_IO_LowLevel_Unsafe_Priority___TypeInfo);
    thunk_FUN_032e1da0(Unity_IO_LowLevel_Unsafe_ProcessingState___TypeInfo);
    thunk_FUN_032e1da0(
                      Unity_VisualScripting_StaticFunctionInvoker<InputActionReference,_InputAction>_TypeInfo
                      );
    thunk_FUN_032e1da0(UnityEngine_Rendering_ProfilingSampler___TypeInfo);
    thunk_FUN_032e1da0(Oculus_Interaction_ProgressCurve___TypeInfo);
    thunk_FUN_032e1da0(System_ComponentModel_PropertyDescriptor___TypeInfo);
                    /* try { // try from 062448ec to 06344a17 has its CatchHandler @ 062448ec
                       catch() { ... } // from try @ 062448ec with catch @ 062448ec
                       catch() { ... } // from try @ 06244b28 with catch @ 062448ec
                       catch() { ... } // from try @ 06244bd8 with catch @ 062448ec
                       catch() { ... } // from try @ 06244be0 with catch @ 062448ec
                       catch() { ... } // from try @ 06244c9c with catch @ 062448ec */
    thunk_FUN_032e1da0(PTR_DAT_072975d8);
    thunk_FUN_032e1da0(System_Reflection_PropertyInfo___TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Quaternion___TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Rendering_RTHandle___TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_RaycastHit___TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_RaycastHit2D___TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_StaticFunctionInvoker<int,_LayerMask>_TypeInfo);
    thunk_FUN_032e1da0(System_Xml_ReadState___TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_StaticFunctionInvoker<LayerMask,_int>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0729e790);
    thunk_FUN_032e1da0(System_ComponentModel_ReflectPropertyDescriptor___TypeInfo);
    thunk_FUN_032e1da0(System_Text_RegularExpressions_Regex___TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0729e7d0);
    thunk_FUN_032e1da0(UnityEngine_RenderBuffer___TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Rendering_RenderBufferLoadAction___TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Rendering_RenderBufferStoreAction___TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_Rendering_RenderStateBlock___TypeInfo);
    DAT_076de0f0 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
  thunk_FUN_0330670c();
  if (lVar2 != 0) {
    return;
  }
  lVar2 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072794b0,0x18);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
                    /* try { // try from 06244a18 to 06344a3f has its CatchHandler @ 06244c04 */
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)UnityEngine_RenderBuffer___TypeInfo;
    thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x20));
    if (1 < *(uint *)(lVar2 + 0x18)) {
      *(undefined8 *)(lVar2 + 0x28) =
           *(undefined8 *)System_ComponentModel_ReflectPropertyDescriptor___TypeInfo;
      thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x28));
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) =
             *(undefined8 *)System_ComponentModel_PropertyDescriptor___TypeInfo;
                    /* try { // try from 06244a74 to 06344a9f has its CatchHandler @ 06244c00 */
        thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x30));
        if (3 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)System_Reflection_PropertyInfo___TypeInfo;
          thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x38));
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) =
                 *(undefined8 *)UnityEngine_Rendering_RenderBufferStoreAction___TypeInfo;
            thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x40));
            if (5 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)UnityEngine_RaycastHit___TypeInfo;
              thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x48));
              if (6 < *(uint *)(lVar2 + 0x18)) {
                    /* try { // try from 06244b00 to 06344b0b has its CatchHandler @ 06244bf8 */
                *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)PTR_DAT_072975d8;
                thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x50));
                    /* try { // try from 06244b1c to 06344b27 has its CatchHandler @ 06244bf0 */
                if (7 < *(uint *)(lVar2 + 0x18)) {
                    /* try { // try from 06244b28 to 06344bc7 has its CatchHandler @ 062448ec */
                  *(undefined8 *)(lVar2 + 0x58) =
                       *(undefined8 *)UnityEngine_Rendering_RenderBufferLoadAction___TypeInfo;
                  thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x58));
                  if (8 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)UnityEngine_Quaternion___TypeInfo
                    ;
                    thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x60));
                    if (9 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)PTR_DAT_0729e7d0;
                      thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x68));
                      if (10 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x70) =
                             *(undefined8 *)UnityEngine_Rendering_ProfilingSampler___TypeInfo;
                        thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x70));
                        if (0xb < *(uint *)(lVar2 + 0x18)) {
                    /* try { // try from 06244bc8 to 06344bcf has its CatchHandler @ 06244bfc */
                    /* try { // try from 06244bd0 to 06344bd3 has its CatchHandler @ 06244bf4 */
                    /* try { // try from 06244bd4 to 06344bd7 has its CatchHandler @ 06244bec */
                          *(undefined8 *)(lVar2 + 0x78) =
                               *(undefined8 *)System_Xml_ReadState___TypeInfo;
                    /* try { // try from 06244bd8 to 06344bdb has its CatchHandler @ 062448ec */
                    /* try { // try from 06244bdc to 06344bdf has its CatchHandler @ 06244be8 */
                          thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x78));
                    /* try { // try from 06244be0 to 06344c1b has its CatchHandler @ 062448ec */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06244bdc with catch @ 06244be8
                        */
                          if (0xc < *(uint *)(lVar2 + 0x18)) {
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06244bd4 with catch @ 06244bec
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06244b1c with catch @ 06244bf0
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06244bd0 with catch @ 06244bf4
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06244b00 with catch @ 06244bf8
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06244bc8 with catch @ 06244bfc
                        */
                            *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)PTR_DAT_0729e790;
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06244a74 with catch @ 06244c00
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06244a18 with catch @ 06244c04
                        */
                            thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x80));
                            if (0xd < *(uint *)(lVar2 + 0x18)) {
                    /* try { // try from 06244c1c to 06344c1f has its CatchHandler @ 06244c2c */
                              *(undefined8 *)(lVar2 + 0x88) =
                                   *(undefined8 *)System_Text_RegularExpressions_Regex___TypeInfo;
                    /* catch() { ... } // from try @ 06244c1c with catch @ 06244c2c */
                              thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x88));
                    /* try { // try from 06244c34 to 06344c9b has its CatchHandler @ 06244cb0 */
                              if (0xe < *(uint *)(lVar2 + 0x18)) {
                                *(undefined8 *)(lVar2 + 0x90) =
                                     *(undefined8 *)
                                      UnityEngine_Rendering_RenderStateBlock___TypeInfo;
                                thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x90));
                                if (0xf < *(uint *)(lVar2 + 0x18)) {
                                  *(undefined8 *)(lVar2 + 0x98) =
                                       *(undefined8 *)
                                        Unity_VisualScripting_StaticFunctionInvoker<InputActionReference,_InputAction>_TypeInfo
                                  ;
                                  thunk_FUN_0333a630((undefined8 *)(lVar2 + 0x98));
                                  if (0x10 < *(uint *)(lVar2 + 0x18)) {
                    /* try { // try from 06244c9c to 06344ca7 has its CatchHandler @ 062448ec */
                                    *(undefined8 *)(lVar2 + 0xa0) =
                                         *(undefined8 *)UnityEngine_RaycastHit2D___TypeInfo;
                                    thunk_FUN_0333a630((undefined8 *)(lVar2 + 0xa0));
                    /* try { // try from 06244ca8 to 06344caf has its CatchHandler @ 06244cb0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06244c34 with catch @ 06244cb0
                       catch(type#2 @ 00000000) { ... } // from try @ 06244ca8 with catch @ 06244cb0
                        */
                                    if (0x11 < *(uint *)(lVar2 + 0x18)) {
                    /* try { // try from 06244cb4 to 06344dd7 has its CatchHandler @ 06244cb4
                       catch() { ... } // from try @ 06244cb4 with catch @ 06244cb4
                       catch() { ... } // from try @ 06244ec4 with catch @ 06244cb4
                       catch() { ... } // from try @ 06244f68 with catch @ 06244cb4
                       catch() { ... } // from try @ 06244f70 with catch @ 06244cb4
                       catch() { ... } // from try @ 06245020 with catch @ 06244cb4 */
                                      *(undefined8 *)(lVar2 + 0xa8) =
                                           *(undefined8 *)
                                            Unity_IO_LowLevel_Unsafe_Priority___TypeInfo;
                                      thunk_FUN_0333a630((undefined8 *)(lVar2 + 0xa8));
                                      if (0x12 < *(uint *)(lVar2 + 0x18)) {
                                        *(undefined8 *)(lVar2 + 0xb0) =
                                             *(undefined8 *)
                                              Unity_VisualScripting_StaticFunctionInvoker<LayerMask,_int>_TypeInfo
                                        ;
                                        thunk_FUN_0333a630((undefined8 *)(lVar2 + 0xb0));
                                        if (0x13 < *(uint *)(lVar2 + 0x18)) {
                                          *(undefined8 *)(lVar2 + 0xb8) =
                                               *(undefined8 *)
                                                Oculus_Interaction_ProgressCurve___TypeInfo;
                                          thunk_FUN_0333a630((undefined8 *)(lVar2 + 0xb8));
                                          if (0x14 < *(uint *)(lVar2 + 0x18)) {
                                            *(undefined8 *)(lVar2 + 0xc0) =
                                                 *(undefined8 *)
                                                  UnityEngine_Rendering_RTHandle___TypeInfo;
                                            thunk_FUN_0333a630((undefined8 *)(lVar2 + 0xc0));
                                            if (0x15 < *(uint *)(lVar2 + 0x18)) {
                                              *(undefined8 *)(lVar2 + 200) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Unity_VisualScripting_StaticFunctionInvoker<int,_LayerMask>_TypeInfo
                                              ;
                                              thunk_FUN_0333a630((undefined8 *)(lVar2 + 200));
                                              if (0x16 < *(uint *)(lVar2 + 0x18)) {
                                                *(undefined8 *)(lVar2 + 0xd0) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Unity_IO_LowLevel_Unsafe_ProcessingState___TypeInfo
                                                ;
                                                thunk_FUN_0333a630((undefined8 *)(lVar2 + 0xd0));
                                                if (0x17 < *(uint *)(lVar2 + 0x18)) {
                                                  *(undefined8 *)(lVar2 + 0xd8) =
                                                       *(undefined8 *)
                                                                                                                
                                                  GLTFast_PrimitiveCreateContextBase___TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                                    thunk_FUN_032cd7c0();
                                                  }
                                                  thunk_FUN_0330670c();
                    /* try { // try from 06244dd8 to 06344dff has its CatchHandler @ 06244f88 */
                                                  plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8
                                                                             ) + 0x28);
                                                  *plVar3 = lVar2;
                                                  thunk_FUN_0333a630(plVar3,lVar2);
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
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


