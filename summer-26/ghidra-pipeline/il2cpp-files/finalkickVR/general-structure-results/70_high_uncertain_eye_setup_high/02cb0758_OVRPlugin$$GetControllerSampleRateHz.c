/*
FUNCTION_NAME: OVRPlugin$$GetControllerSampleRateHz
ENTRY_POINT: 02cb0758
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerSampleRateHz(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD *pLVar3;
  undefined8 *puStack0000000000000000;
  int iStack000000000000000c;
  int iStack000000000000001c;
  byte bStack0000000000000022;
  byte bStack0000000000000023;
  int iStack0000000000000034;
  byte bStack000000000000003e;
  byte bStack000000000000003f;
  undefined8 uStack0000000000000040;
  long lStack0000000000000048;
  
  puStack0000000000000000 =
       (undefined8 *)
       Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>__ctor__;
                    /* try { // try from 02cb0774 to 02db081f has its CatchHandler @ 02cb083c */
  uStack0000000000000040 = param_2;
  lStack0000000000000048 = param_1;
  if ((GroupPresenceSample_ScrollThroughDestinations_m5B8C0D133B477991D5A730AE5A82662A965C9800::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>__ctor__
              );
    GroupPresenceSample_ScrollThroughDestinations_m5B8C0D133B477991D5A730AE5A82662A965C9800::
    s_Il2CppMethodInitialized = 1;
  }
  bStack000000000000003f =
       GroupPresenceSample_PressUp_mB61BEC9AE70650E074F74EE37EB58ACAA3419CCD
                 (lStack0000000000000048,0);
  bStack000000000000003f = bStack000000000000003f & 1;
  if (bStack000000000000003f == 0) {
    bStack0000000000000023 =
         GroupPresenceSample_PressDown_mF19F01C4DF7864B39BA06EB8EC99303C3C6894CD
                   (lStack0000000000000048,0);
                    /* try { // try from 02cb0870 to 02db0877 has its CatchHandler @ 02cb0b20 */
    bStack0000000000000023 = bStack0000000000000023 & 1;
                    /* try { // try from 02cb0878 to 02db087b has its CatchHandler @ 02cb0b3c */
                    /* try { // try from 02cb087c to 02db08db has its CatchHandler @ 02cb056c */
    if (bStack0000000000000023 == 0) {
      *(undefined1 *)(lStack0000000000000048 + 100) = 0;
    }
    else {
      bStack0000000000000022 = *(byte *)(lStack0000000000000048 + 100) & 1;
      if (bStack0000000000000022 == 0) {
        iStack000000000000001c = *(int *)(lStack0000000000000048 + 0x60);
        uVar2 = il2cpp_codegen_add<int,int>(iStack000000000000001c,1);
        *(undefined4 *)(lStack0000000000000048 + 0x60) = uVar2;
        iVar1 = *(int *)(lStack0000000000000048 + 0x60);
        pLVar3 = *(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD **)
                  (lStack0000000000000048 + 0x50);
        NullCheck(pLVar3);
        iStack000000000000000c =
             List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline
                       (pLVar3,(MethodInfo *)*puStack0000000000000000);
        if (iStack000000000000000c <= iVar1) {
          *(undefined4 *)(lStack0000000000000048 + 0x60) = 0;
        }
        *(undefined1 *)(lStack0000000000000048 + 100) = 1;
        GroupPresenceSample_UpdateDestinationsConsole_m131711E4FA4B5815AC8E907B2CC9EEC7AEE5389C
                  (lStack0000000000000048,0);
      }
    }
  }
  else {
    bStack000000000000003e = *(byte *)(lStack0000000000000048 + 100) & 1;
    if (bStack000000000000003e == 0) {
      uVar2 = il2cpp_codegen_subtract<int,int>(*(int *)(lStack0000000000000048 + 0x60),1);
      *(undefined4 *)(lStack0000000000000048 + 0x60) = uVar2;
      iStack0000000000000034 = *(int *)(lStack0000000000000048 + 0x60);
      if (iStack0000000000000034 < 0) {
        pLVar3 = *(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD **)
                  (lStack0000000000000048 + 0x50);
        NullCheck(pLVar3);
                    /* try { // try from 02cb0820 to 02db086f has its CatchHandler @ 02cb056c */
        iVar1 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline
                          (pLVar3,(MethodInfo *)*puStack0000000000000000);
                    /* catch(type#1 @ 0474a728) { ... } // from try @ 02cb0774 with catch @ 02cb083c
                       catch(type#1 @ 0474a728) { ... } // from try @ 02cb08dc with catch @ 02cb083c
                        */
        uVar2 = il2cpp_codegen_subtract<int,int>(iVar1,1);
        *(undefined4 *)(lStack0000000000000048 + 0x60) = uVar2;
      }
      *(undefined1 *)(lStack0000000000000048 + 100) = 1;
      GroupPresenceSample_UpdateDestinationsConsole_m131711E4FA4B5815AC8E907B2CC9EEC7AEE5389C
                (lStack0000000000000048,0);
    }
  }
  return;
}


