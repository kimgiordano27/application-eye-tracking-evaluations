/*
FUNCTION_NAME: Sirenix.Serialization.Utilities.EmitUtilities.<>c__DisplayClass8_0<object,-IntPtr>$$<CreateInstanceFieldGetter>b__0
ENTRY_POINT: 02459b20
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02459c0c) */

void Sirenix_Serialization_Utilities_EmitUtilities_<>c__DisplayClass8_0<object,_IntPtr>__<CreateInstanceFieldGetter>b__0
               (void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  do {
                    /* try { // try from 02459b20 to 02559b23 has its CatchHandler @ 02459b44 */
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* try { // try from 02459b24 to 02559b27 has its CatchHandler @ 02459b3c */
                    /* try { // try from 02459b28 to 02559b2b has its CatchHandler @ 02459b34 */
                    /* catch() { ... } // from try @ 024598dc with catch @ 02459b2c
                       try { // try from 02459b2c to 02559bbf has its CatchHandler @ 02459450 */
                    /* catch() { ... } // from try @ 0245988c with catch @ 02459b30 */
                    /* catch() { ... } // from try @ 02459b28 with catch @ 02459b34 */
    puVar6 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x28)) {
                    /* catch() { ... } // from try @ 024598a8 with catch @ 02459b38 */
      puVar6 = (undefined8 *)*unaff_x24;
    }
                    /* catch() { ... } // from try @ 02459b24 with catch @ 02459b3c */
    puVar2 = *(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x40);
                    /* catch() { ... } // from try @ 024599d4 with catch @ 02459b40 */
    uVar1 = *puVar2;
                    /* catch() { ... } // from try @ 02459b20 with catch @ 02459b44 */
    *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
                    /* catch() { ... } // from try @ 02459858 with catch @ 02459b48 */
                    /* catch() { ... } // from try @ 02459b1c with catch @ 02459b4c */
                    /* catch() { ... } // from try @ 02459930 with catch @ 02459b50 */
                    /* catch() { ... } // from try @ 02459b18 with catch @ 02459b54 */
                    /* catch() { ... } // from try @ 0245983c with catch @ 02459b58 */
    (*(code *)puVar2[2])(uVar1);
    lVar3 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* catch() { ... } // from try @ 02459a20 with catch @ 02459b5c */
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02459a70;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_02459a70:
    uVar5 = (*(code *)*puVar6)();
    if ((uVar5 & 1) == 0) {
                    /* catch() { ... } // from try @ 02459640 with catch @ 02459b60 */
                    /* catch() { ... } // from try @ 0245977c with catch @ 02459b64 */
      if (unaff_x20 == (long *)0x0) goto LAB_02459bc8;
                    /* catch() { ... } // from try @ 02459b14 with catch @ 02459b68 */
                    /* catch() { ... } // from try @ 02459b10 with catch @ 02459b6c */
      lVar3 = *unaff_x20;
                    /* catch() { ... } // from try @ 024595ec with catch @ 02459b70 */
                    /* catch() { ... } // from try @ 02459624 with catch @ 02459b74 */
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* catch() { ... } // from try @ 02459b0c with catch @ 02459b78 */
                    /* catch() { ... } // from try @ 024595a4 with catch @ 02459b7c */
      if (uVar5 == 0) goto LAB_02459ba0;
                    /* catch() { ... } // from try @ 02459b08 with catch @ 02459b80 */
                    /* catch() { ... } // from try @ 024595cc with catch @ 02459b84 */
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          lVar3 = lVar4 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_02459ae4;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_01ecb238();
LAB_02459ae4:
    *(void **)(unaff_x29 + -0x18) = unaff_x23;
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
    memcpy(unaff_x25,unaff_x23,unaff_x22);
    memcpy(unaff_x24,unaff_x25,unaff_x22);
  } while( true );
  while( true ) {
                    /* catch() { ... } // from try @ 024596ec with catch @ 02459b94 */
    uVar5 = uVar5 - 1;
                    /* catch() { ... } // from try @ 02459668 with catch @ 02459b98 */
    piVar7 = piVar7 + 4;
    if (uVar5 == 0) break;
                    /* catch() { ... } // from try @ 02459b04 with catch @ 02459b88 */
                    /* catch() { ... } // from try @ 02459b00 with catch @ 02459b8c */
                    /* catch() { ... } // from try @ 024597bc with catch @ 02459b90 */
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_02459bbc;
    }
  }
LAB_02459ba0:
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_02459bbc:
  (*(code *)*puVar6)();
LAB_02459bc8:
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


