/*
FUNCTION_NAME: Unity.Physics.RaycastQueries$$RayCapsule
ENTRY_POINT: 03248650
PROGRAM: vrlegs-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_6
*/


void Unity_Physics_RaycastQueries__RayCapsule(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000010;
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
  undefined8 in_stack_00000068;
  
  FUN_01ab69ac(OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo);
  FUN_01ab69ac(OVRPlugin_Quatf___TypeInfo);
                    /* try { // try from 03248668 to 03348677 has its CatchHandler @ 032486bc */
  FUN_01ab69ac(OVRPlugin_SpaceQueryResult___TypeInfo);
                    /* try { // try from 03248678 to 033486cb has its CatchHandler @ 032483e4 */
  FUN_01ab69ac(OVRPlugin_SpaceComponentType___TypeInfo);
  FUN_01ab69ac(OVRPlugin_Vector3f___TypeInfo);
  FUN_01ab69ac(OVRPlugin_Vector2f___TypeInfo);
  *(undefined1 *)(unaff_x27 + 0x773) = 1;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  FUN_02761154(&stack0x00000060,*unaff_x26,0);
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03248608 with catch @ 032486b4
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03248640 with catch @ 032486b8
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 03248668 with catch @ 032486bc
                        */
  puVar1 = *(undefined8 **)(*unaff_x19 + 0xb8);
  puVar1[1] = in_stack_00000068;
  *puVar1 = in_stack_00000060;
                    /* try { // try from 032486cc to 033486cf has its CatchHandler @ 0324871c */
                    /* try { // try from 032486d0 to 0334872b has its CatchHandler @ 032483e4 */
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  FUN_02761154(&stack0x00000050,*unaff_x25,0);
  lVar2 = *(long *)(*unaff_x19 + 0xb8);
  *(undefined8 *)(lVar2 + 0x18) = in_stack_00000058;
  *(undefined8 *)(lVar2 + 0x10) = in_stack_00000050;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  FUN_02761154(&stack0x00000040,*unaff_x24,0);
  lVar2 = *(long *)(*unaff_x19 + 0xb8);
  *(undefined8 *)(lVar2 + 0x28) = in_stack_00000048;
  *(undefined8 *)(lVar2 + 0x20) = in_stack_00000040;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
                    /* catch() { ... } // from try @ 032486cc with catch @ 0324871c */
  FUN_02761154(&stack0x00000030,*unaff_x23,0);
                    /* try { // try from 0324872c to 03348733 has its CatchHandler @ 03248748 */
  lVar2 = *(long *)(*unaff_x19 + 0xb8);
                    /* try { // try from 03248734 to 0334873f has its CatchHandler @ 032483e4 */
  *(undefined8 *)(lVar2 + 0x38) = in_stack_00000038;
  *(undefined8 *)(lVar2 + 0x30) = in_stack_00000030;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
                    /* try { // try from 03248740 to 03348747 has its CatchHandler @ 03248748 */
  FUN_02761154(&stack0x00000020,*unaff_x22,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0324872c with catch @ 03248748
                       catch(type#2 @ 00000000) { ... } // from try @ 03248740 with catch @ 03248748
                        */
  lVar2 = *(long *)(*unaff_x19 + 0xb8);
  *(undefined8 *)(lVar2 + 0x48) = in_stack_00000028;
  *(undefined8 *)(lVar2 + 0x40) = in_stack_00000020;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_02761154(&stack0x00000010,*unaff_x21,0);
  lVar2 = *(long *)(*unaff_x19 + 0xb8);
  *(undefined8 *)(lVar2 + 0x58) = in_stack_00000018;
  *(undefined8 *)(lVar2 + 0x50) = in_stack_00000010;
  FUN_02761154();
  lVar2 = *(long *)(*unaff_x19 + 0xb8);
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  return;
}


