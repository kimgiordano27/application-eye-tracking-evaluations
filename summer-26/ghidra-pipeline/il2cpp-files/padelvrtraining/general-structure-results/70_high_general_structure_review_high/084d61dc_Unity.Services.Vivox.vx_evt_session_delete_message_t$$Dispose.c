/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_delete_message_t$$Dispose
ENTRY_POINT: 084d61dc
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


void Unity_Services_Vivox_vx_evt_session_delete_message_t__Dispose(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long *plVar7;
  undefined8 uVar8;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 084d61dc to 085d61fb has its CatchHandler @ 084d62dc */
  if ((*(byte *)(*unaff_x22 + 0x130) < *(byte *)(param_1 + 0x130)) ||
     (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) != param_1
     )) {
    thunk_FUN_03d2ef40();
                    /* try { // try from 084d6214 to 085d6217 has its CatchHandler @ 084d6318 */
                    /* try { // try from 084d6218 to 085d621b has its CatchHandler @ 084d630c */
                    /* try { // try from 084d621c to 085d621f has its CatchHandler @ 084d6308 */
    FUN_05a39028();
                    /* try { // try from 084d6220 to 085d6223 has its CatchHandler @ 084d6314 */
  }
                    /* try { // try from 084d6230 to 085d6233 has its CatchHandler @ 084d62d4 */
                    /* try { // try from 084d6234 to 085d6237 has its CatchHandler @ 084d62f8 */
  plVar7 = *(long **)(unaff_x20 + 0x10);
                    /* try { // try from 084d6238 to 085d623b has its CatchHandler @ 084d62f4 */
  uVar8 = *(undefined8 *)(unaff_x19 + 0xe);
                    /* try { // try from 084d623c to 085d623f has its CatchHandler @ 084d6320 */
                    /* try { // try from 084d6240 to 085d6243 has its CatchHandler @ 084d62f0 */
                    /* try { // try from 084d6244 to 085d6247 has its CatchHandler @ 084d62e8 */
  uVar2 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_09280b18);
  FUN_084ef6a8(uVar2,uVar8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09280a78) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_084d62bc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_09280a78,1);
LAB_084d62bc:
  lVar4 = (*(code *)*puVar3)(plVar7,uVar2,0,puVar3[1]);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  in_stack_00000018 = FUN_0636bf40(lVar4,*(undefined8 *)PTR_DAT_09280b58);
  uVar5 = FUN_062f9900(&stack0x00000018,*(undefined8 *)PTR_DAT_09280b50);
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
    lVar4 = FUN_062f9944(&stack0x00000018,*(undefined8 *)PTR_DAT_09280b38);
    plVar7 = (long *)(unaff_x19 + 0x10);
    *plVar7 = lVar4;
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
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    uVar5 = FUN_04ee5c0c(uVar2,*(undefined8 *)PTR_DAT_09280b00);
    if ((uVar5 & 1) == 0) {
      uVar2 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_09280b28);
      System_Collections_Generic_List<BitmapAllocator32_Page>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
                (uVar2,*(undefined8 *)PTR_DAT_09280b20);
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
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09280a20) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_084d6430;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_09280a20,1);
LAB_084d6430:
      lVar4 = (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
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
      uVar2 = FUN_062f9944(&stack0x00000008,*(undefined8 *)PTR_DAT_09280b40);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uVar2 = FUN_084d3ae8(uVar2,uVar2);
      uVar8 = FUN_04ee8ab4(uVar2,*(undefined8 *)PTR_DAT_09280b08);
      FUN_04f22458(uVar8,*(undefined8 *)PTR_DAT_09280b10);
      FUN_084d40f8();
    }
    puVar1 = PTR_DAT_09280af8;
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_03d1023c(unaff_x19 + 0x10,0);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_062285f0(unaff_x19 + 2,uVar2,*(undefined8 *)puVar1);
  }
  return;
}


