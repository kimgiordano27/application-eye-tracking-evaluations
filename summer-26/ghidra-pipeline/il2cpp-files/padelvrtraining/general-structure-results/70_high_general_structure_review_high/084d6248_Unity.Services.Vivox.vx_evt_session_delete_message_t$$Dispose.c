/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_delete_message_t$$Dispose
ENTRY_POINT: 084d6248
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_vx_evt_session_delete_message_t__Dispose(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar7;
  long *unaff_x22;
  undefined8 uVar8;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 084d6248 to 085d624b has its CatchHandler @ 084d631c */
                    /* try { // try from 084d624c to 085d62cf has its CatchHandler @ 084d62d8 */
  FUN_084ef6a8();
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar4 = *unaff_x22;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09280a78) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_084d62bc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370();
LAB_084d62bc:
  lVar4 = (*(code *)*puVar2)();
                    /* catch() { ... } // from try @ 084d61c8 with catch @ 084d62d0
                       try { // try from 084d62d0 to 085d633b has its CatchHandler @ 084d5ea0 */
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
                    /* catch() { ... } // from try @ 084d6230 with catch @ 084d62d4 */
                    /* catch() { ... } // from try @ 084d624c with catch @ 084d62d8 */
                    /* catch() { ... } // from try @ 084d61dc with catch @ 084d62dc */
                    /* catch() { ... } // from try @ 084d6140 with catch @ 084d62e0 */
  in_stack_00000018 = FUN_0636bf40(lVar4,*(undefined8 *)PTR_DAT_09280b58);
                    /* catch() { ... } // from try @ 084d612c with catch @ 084d62e4 */
                    /* catch() { ... } // from try @ 084d6244 with catch @ 084d62e8 */
                    /* catch() { ... } // from try @ 084d609c with catch @ 084d62ec */
                    /* catch() { ... } // from try @ 084d6240 with catch @ 084d62f0 */
                    /* catch() { ... } // from try @ 084d6238 with catch @ 084d62f4 */
                    /* catch() { ... } // from try @ 084d6234 with catch @ 084d62f8 */
  uVar5 = FUN_062f9900(&stack0x00000018,*(undefined8 *)PTR_DAT_09280b50);
                    /* catch() { ... } // from try @ 084d6224 with catch @ 084d62fc */
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000018;
    thunk_FUN_03d1023c(unaff_x19 + 0x12,0);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_04b90be4(unaff_x19 + 2,&stack0x00000018);
  }
  else {
                    /* catch() { ... } // from try @ 084d621c with catch @ 084d6308 */
                    /* catch() { ... } // from try @ 084d6218 with catch @ 084d630c */
                    /* catch() { ... } // from try @ 084d5fbc with catch @ 084d6310 */
    lVar4 = FUN_062f9944(&stack0x00000018,*(undefined8 *)PTR_DAT_09280b38);
    plVar7 = (long *)(unaff_x19 + 0x10);
                    /* catch() { ... } // from try @ 084d617c with catch @ 084d6314
                       catch() { ... } // from try @ 084d6220 with catch @ 084d6314 */
                    /* catch() { ... } // from try @ 084d615c with catch @ 084d6318
                       catch() { ... } // from try @ 084d6214 with catch @ 084d6318 */
                    /* catch() { ... } // from try @ 084d60e4 with catch @ 084d631c
                       catch() { ... } // from try @ 084d6248 with catch @ 084d631c */
    *plVar7 = lVar4;
                    /* catch() { ... } // from try @ 084d6048 with catch @ 084d6320
                       catch() { ... } // from try @ 084d623c with catch @ 084d6320 */
    thunk_FUN_03d1023c(plVar7);
    if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar4 = *(long *)(*plVar7 + 0x20);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar4 = *(long *)(lVar4 + 0x10);
                    /* try { // try from 084d633c to 085d6373 has its CatchHandler @ 084d65d4 */
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar8 = *(undefined8 *)(lVar4 + 0x10);
    uVar5 = FUN_04ee5c0c(uVar8,*(undefined8 *)PTR_DAT_09280b00);
    if ((uVar5 & 1) == 0) {
      uVar8 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_09280b28);
      System_Collections_Generic_List<BitmapAllocator32_Page>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
                (uVar8,*(undefined8 *)PTR_DAT_09280b20);
    }
    else {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      plVar7 = *(long **)(unaff_x20 + 0x20);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 084d637c to 085d637f has its CatchHandler @ 084d65c8 */
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
                    /* try { // try from 084d6390 to 085d63f7 has its CatchHandler @ 084d65d0 */
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09280a20) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_084d6430;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_09280a20,1);
LAB_084d6430:
      lVar4 = (*(code *)*puVar2)(plVar7,uVar8,puVar2[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      in_stack_00000008 = FUN_0636bf40(lVar4,*(undefined8 *)PTR_DAT_09280b60);
      uVar5 = FUN_062f9900(&stack0x00000008,*(undefined8 *)PTR_DAT_09280b48);
      if ((uVar5 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000008;
        thunk_FUN_03d1023c(unaff_x19 + 0x14,0);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        FUN_04b90be4(unaff_x19 + 2,&stack0x00000008);
        return;
      }
      uVar8 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_09280b40);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar8 = FUN_084d3ae8(uVar8,uVar8);
      uVar3 = FUN_04ee8ab4(uVar8,*(undefined8 *)PTR_DAT_09280b08);
      FUN_04f22458(uVar3,*(undefined8 *)PTR_DAT_09280b10);
      FUN_084d40f8();
    }
    puVar1 = PTR_DAT_09280af8;
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_062285f0(unaff_x19 + 2,uVar8,*(undefined8 *)puVar1);
  }
  return;
}


