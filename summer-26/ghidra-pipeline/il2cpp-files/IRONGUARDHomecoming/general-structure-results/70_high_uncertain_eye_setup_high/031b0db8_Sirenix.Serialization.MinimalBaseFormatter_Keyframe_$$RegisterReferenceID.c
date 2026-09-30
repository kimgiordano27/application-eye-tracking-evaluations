/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Keyframe>$$RegisterReferenceID
ENTRY_POINT: 031b0db8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x031b0ee0) */
/* WARNING: Removing unreachable block (ram,0x031b0edc) */
/* WARNING: Removing unreachable block (ram,0x031b0f28) */

void Sirenix_Serialization_MinimalBaseFormatter<Keyframe>__RegisterReferenceID
               (undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x25;
  
  do {
    param_2 = FUN_01ecaf44(param_2);
    do {
      lVar2 = *unaff_x23;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == param_2) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_031b0d48;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031b0d48:
                    /* try { // try from 031b0e18 to 032b0e27 has its CatchHandler @ 031b0e28 */
      (*(code *)*puVar1)(&stack0x000000c8);
                    /* catch() { ... } // from try @ 031b0d98 with catch @ 031b0e28
                       catch() { ... } // from try @ 031b0e18 with catch @ 031b0e28 */
      memcpy(&stack0x00000000,&stack0x000000c8,200);
                    /* try { // try from 031b0e2c to 032b0e2f has its CatchHandler @ 031b0e38 */
                    /* try { // try from 031b0e30 to 032b0e3b has its CatchHandler @ 031b0ca8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031b0e2c with catch @ 031b0e38
                        */
                    /* try { // try from 031b0e3c to 032b113f has its CatchHandler @ 031b0e3c
                       catch() { ... } // from try @ 031b0e3c with catch @ 031b0e3c
                       catch() { ... } // from try @ 031b11e4 with catch @ 031b0e3c
                       catch() { ... } // from try @ 031b1224 with catch @ 031b0e3c
                       catch() { ... } // from try @ 031b12ec with catch @ 031b0e3c
                       catch() { ... } // from try @ 031b1398 with catch @ 031b0e3c */
      memcpy(&stack0x000000c8,&stack0x00000000,200);
      FUN_031b07b8();
      lVar2 = *unaff_x23;
                    /* try { // try from 031b0d4c to 032b0d7f has its CatchHandler @ 031b0d80 */
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x25) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_031b0d94;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031b0cf4 with catch @ 031b0d80
                       catch(type#1 @ 042b3198) { ... } // from try @ 031b0d4c with catch @ 031b0d80
                       try { // try from 031b0d80 to 032b0d97 has its CatchHandler @ 031b0ca8 */
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031b0d94:
                    /* try { // try from 031b0d98 to 032b0daf has its CatchHandler @ 031b0e28 */
      uVar3 = (*(code *)*puVar1)();
      if ((uVar3 & 1) == 0) {
        if (unaff_x23 == (long *)0x0) goto LAB_031b0ed0;
        lVar2 = *unaff_x23;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 == 0) goto LAB_031b0ea8;
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_031b0e90;
      }
      param_2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
                    /* try { // try from 031b0db0 to 032b0e17 has its CatchHandler @ 031b0ca8 */
    } while ((*(byte *)(param_2 + 0x135) & 1) != 0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_031b0e90:
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_031b0ec4;
    }
  }
LAB_031b0ea8:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031b0ec4:
  (*(code *)*puVar1)();
LAB_031b0ed0:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


