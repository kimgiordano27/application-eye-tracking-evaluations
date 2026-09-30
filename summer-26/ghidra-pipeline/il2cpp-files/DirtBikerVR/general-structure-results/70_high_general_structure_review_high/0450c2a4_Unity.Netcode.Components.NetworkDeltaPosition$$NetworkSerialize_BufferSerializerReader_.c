/*
FUNCTION_NAME: Unity.Netcode.Components.NetworkDeltaPosition$$NetworkSerialize<BufferSerializerReader>
ENTRY_POINT: 0450c2a4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4
*/


void Unity_Netcode_Components_NetworkDeltaPosition__NetworkSerialize<BufferSerializerReader>
               (void *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long *unaff_x19;
  code *pcVar5;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  size_t unaff_x24;
  void *unaff_x25;
  void *unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  memset(param_1,0,unaff_x24);
  if (unaff_x19 == (long *)0x0) {
LAB_0450c444:
    if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
                    /* try { // try from 0450c2b4 to 0460c2bf has its CatchHandler @ 0450c31c */
                    /* try { // try from 0450c2c4 to 0460c2d3 has its CatchHandler @ 0450c318 */
    uVar1 = (**(code **)(*unaff_x19 + 0x208))();
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 0450c2dc to 0460c2e7 has its CatchHandler @ 0450c330 */
      lVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x18))();
      if (lVar2 == 0) {
LAB_0450c36c:
        if (*(int *)(*(long *)PTR_DAT_084918f8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        pcVar5 = (code *)**(undefined8 **)(*(long *)(unaff_x22 + 0x38) + 0x38);
        thunk_FUN_03ae913c();
        uVar1 = (*pcVar5)();
        unaff_x26 = unaff_x25;
        if ((uVar1 & 1) == 0) {
          if (unaff_x23 == 0) goto LAB_0450c444;
          uVar4 = 5;
          goto LAB_0450c410;
        }
      }
      else {
        lVar2 = *(long *)(unaff_x22 + 0x20);
        *(undefined8 *)(unaff_x29 + -0x20) = unaff_x27;
                    /* try { // try from 0450c300 to 0460c303 has its CatchHandler @ 0450c324 */
                    /* try { // try from 0450c304 to 0460c307 has its CatchHandler @ 0450c320 */
                    /* catch() { ... } // from try @ 0450c234 with catch @ 0450c308
                       try { // try from 0450c308 to 0460c34f has its CatchHandler @ 0450c168 */
                    /* catch() { ... } // from try @ 0450c268 with catch @ 0450c30c */
        lVar2 = (*(code *)**(undefined8 **)(*(long *)(lVar2 + 0xc0) + 0x18))();
                    /* catch() { ... } // from try @ 0450c214 with catch @ 0450c310 */
        if (lVar2 == 0) goto LAB_0450c444;
                    /* catch() { ... } // from try @ 0450c27c with catch @ 0450c314 */
                    /* catch() { ... } // from try @ 0450c2c4 with catch @ 0450c318 */
                    /* catch() { ... } // from try @ 0450c2b4 with catch @ 0450c31c */
                    /* catch() { ... } // from try @ 0450c250 with catch @ 0450c320
                       catch() { ... } // from try @ 0450c304 with catch @ 0450c320 */
                    /* catch() { ... } // from try @ 0450c204 with catch @ 0450c324
                       catch() { ... } // from try @ 0450c300 with catch @ 0450c324 */
                    /* catch() { ... } // from try @ 0450c1f8 with catch @ 0450c328 */
                    /* catch() { ... } // from try @ 0450c1c4 with catch @ 0450c32c */
        pcVar5 = (code *)**(undefined8 **)(*(long *)(unaff_x22 + 0x38) + 0x10);
        uVar3 = thunk_FUN_03ae913c();
        uVar1 = (*pcVar5)(lVar2,uVar3);
        unaff_x27 = *(undefined8 *)(unaff_x29 + -0x20);
        if ((uVar1 & 1) == 0) goto LAB_0450c36c;
      }
      memcpy(unaff_x21,unaff_x26,unaff_x24);
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x22 + 0x38) + 0x30) + 0x28)) {
        unaff_x21 = (undefined8 *)*unaff_x21;
      }
      lVar2 = *unaff_x19;
      *(undefined8 *)(unaff_x29 + -0x18) = unaff_x27;
      *(undefined8 **)(unaff_x29 + -0x10) = unaff_x21;
      (**(code **)(*(long *)(lVar2 + 0x230) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 0x230) + 8));
    }
    else {
      if (unaff_x23 == 0) goto LAB_0450c444;
      uVar4 = 6;
LAB_0450c410:
      *(undefined4 *)(unaff_x23 + 0xb4) = uVar4;
    }
    if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


