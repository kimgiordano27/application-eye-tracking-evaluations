/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsJsonParser$$TryParseArray
ENTRY_POINT: 083fb854
PROGRAM: cac-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


undefined8 Unity_VisualScripting_FullSerializer_fsJsonParser__TryParseArray(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  long unaff_x20;
  long lVar10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000058;
  
  FUN_03f13384(PTR_DAT_0918a430);
                    /* try { // try from 083fb860 to 084fb883 has its CatchHandler @ 083fbba8 */
  FUN_03f13384(PTR_DAT_0918a188);
  FUN_03f13384(PTR_DAT_0910d218);
  *(undefined1 *)(unaff_x20 + 0xf36) = 1;
  puVar3 = PTR_DAT_0918a428;
  puVar2 = PTR_DAT_0918a188;
  puVar1 = PTR_DAT_0910d218;
                    /* try { // try from 083fb888 to 084fb8ab has its CatchHandler @ 083fbba4 */
                    /* try { // try from 083fb8b0 to 084fb8e3 has its CatchHandler @ 083fbbc8 */
  if (*(int *)(unaff_x19 + 0x10) == 1) goto LAB_083fbac8;
  if (*(int *)(unaff_x19 + 0x10) != 0) {
    return 0;
  }
  lVar10 = *(long *)(unaff_x19 + 0x40);
  *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  FUN_083f86e8(lVar10);
  plVar9 = *(long **)(lVar10 + 0x30);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  lVar10 = *plVar9;
                    /* try { // try from 083fb8e8 to 084fb8f7 has its CatchHandler @ 083fbb94 */
  uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar7 != 0) {
                    /* try { // try from 083fb8f8 to 084fb903 has its CatchHandler @ 083fbb90 */
    piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0918a180) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_083fb930;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
                    /* try { // try from 083fb91c to 084fb923 has its CatchHandler @ 083fbb84 */
  puVar4 = (undefined8 *)FUN_03f4b594(plVar9,*(long *)PTR_DAT_0918a180,0);
LAB_083fb930:
                    /* try { // try from 083fb930 to 084fb937 has its CatchHandler @ 083fbb7c */
  uVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  *(undefined8 *)(in_stack_00000058 + 0x48) = uVar5;
                    /* try { // try from 083fb948 to 084fb953 has its CatchHandler @ 083fbb74 */
  thunk_FUN_03f86000();
  *(undefined4 *)(in_stack_00000058 + 0x10) = 0xfffffffd;
  do {
    plVar9 = *(long **)(in_stack_00000058 + 0x48);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar6 = *plVar9;
    lVar10 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar10) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_083fb9cc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 083fb9b4 to 084fba07 has its CatchHandler @ 083fbbc4 */
    puVar4 = (undefined8 *)FUN_03f4b594(plVar9,lVar10,0);
LAB_083fb9cc:
    uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if ((uVar7 & 1) == 0) {
                    /* try { // try from 083fbb58 to 084fbb5b has its CatchHandler @ 083fbbc4 */
      FUN_083fbd5c();
                    /* catch() { ... } // from try @ 083fb774 with catch @ 083fbb5c
                       try { // try from 083fbb5c to 084fbbe3 has its CatchHandler @ 083fb5a0 */
                    /* catch() { ... } // from try @ 083fbaec with catch @ 083fbb60 */
      *(undefined8 *)(in_stack_00000058 + 0x48) = 0;
                    /* catch() { ... } // from try @ 083fbb00 with catch @ 083fbb64 */
                    /* catch() { ... } // from try @ 083fba2c with catch @ 083fbb68 */
      thunk_FUN_03f86000((undefined8 *)(in_stack_00000058 + 0x48),0);
      return 0;
                    /* catch() { ... } // from try @ 083fba18 with catch @ 083fbb6c */
    }
    plVar9 = *(long **)(in_stack_00000058 + 0x48);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar10 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                    /* try { // try from 083fba2c to 084fba33 has its CatchHandler @ 083fbb68 */
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_083fba38;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
                    /* try { // try from 083fba18 to 084fba1b has its CatchHandler @ 083fbb6c */
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f4b594(plVar9,*(long *)puVar2,0);
LAB_083fba38:
    plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
                    /* try { // try from 083fba44 to 084fba4b has its CatchHandler @ 083fbba0 */
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar10 = *plVar9;
                    /* try { // try from 083fba64 to 084fba67 has its CatchHandler @ 083fbb9c */
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
                    /* try { // try from 083fba78 to 084fba97 has its CatchHandler @ 083fbbc0 */
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_083fbaa8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f4b594(plVar9,*(long *)puVar3,0);
                    /* try { // try from 083fba98 to 084fbaeb has its CatchHandler @ 083fb5a0 */
LAB_083fbaa8:
    uVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    *(undefined8 *)(in_stack_00000058 + 0x50) = uVar5;
    thunk_FUN_03f86000();
    unaff_x19 = in_stack_00000058;
LAB_083fbac8:
    plVar9 = *(long **)(unaff_x19 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffc;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar6 = *plVar9;
    lVar10 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
                    /* try { // try from 083fbaec to 084fbaf3 has its CatchHandler @ 083fbb60 */
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar10) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_083fbb24;
        }
        uVar7 = uVar7 - 1;
                    /* try { // try from 083fbb00 to 084fbb1f has its CatchHandler @ 083fbb64 */
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f4b594(plVar9,lVar10,0);
LAB_083fbb24:
    uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if ((uVar7 & 1) != 0) {
                    /* catch() { ... } // from try @ 083fbb54 with catch @ 083fbb70 */
      plVar9 = *(long **)(in_stack_00000058 + 0x50);
                    /* catch() { ... } // from try @ 083fb948 with catch @ 083fbb74 */
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
                    /* catch() { ... } // from try @ 083fbb50 with catch @ 083fbb78 */
                    /* catch() { ... } // from try @ 083fb930 with catch @ 083fbb7c */
      lVar10 = *plVar9;
                    /* catch() { ... } // from try @ 083fbb4c with catch @ 083fbb80 */
                    /* catch() { ... } // from try @ 083fb91c with catch @ 083fbb84 */
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    /* catch() { ... } // from try @ 083fbb48 with catch @ 083fbb88 */
                    /* catch() { ... } // from try @ 083fbb44 with catch @ 083fbb8c */
      if (uVar7 == 0) goto LAB_083fbbb0;
                    /* catch() { ... } // from try @ 083fb8f8 with catch @ 083fbb90 */
                    /* catch() { ... } // from try @ 083fb8e8 with catch @ 083fbb94 */
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
                    /* try { // try from 083fbb3c to 084fbb3f has its CatchHandler @ 083fbbcc */
    FUN_083fbcac();
                    /* try { // try from 083fbb40 to 084fbb43 has its CatchHandler @ 083fbb98 */
                    /* try { // try from 083fbb44 to 084fbb47 has its CatchHandler @ 083fbb8c */
    *(undefined8 *)(in_stack_00000058 + 0x50) = 0;
                    /* try { // try from 083fbb48 to 084fbb4b has its CatchHandler @ 083fbb88 */
                    /* try { // try from 083fbb4c to 084fbb4f has its CatchHandler @ 083fbb80 */
    thunk_FUN_03f86000((undefined8 *)(in_stack_00000058 + 0x50),0);
                    /* try { // try from 083fbb50 to 084fbb53 has its CatchHandler @ 083fbb78 */
                    /* try { // try from 083fbb54 to 084fbb57 has its CatchHandler @ 083fbb70 */
  } while( true );
  while( true ) {
                    /* catch() { ... } // from try @ 083fb888 with catch @ 083fbba4 */
    uVar7 = uVar7 - 1;
                    /* catch() { ... } // from try @ 083fb860 with catch @ 083fbba8 */
    piVar8 = piVar8 + 4;
                    /* catch() { ... } // from try @ 083fb838 with catch @ 083fbbac */
    if (uVar7 == 0) break;
                    /* catch() { ... } // from try @ 083fbb40 with catch @ 083fbb98 */
                    /* catch() { ... } // from try @ 083fba64 with catch @ 083fbb9c */
                    /* catch() { ... } // from try @ 083fba44 with catch @ 083fbba0 */
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0918a430) {
                    /* catch() { ... } // from try @ 083fba78 with catch @ 083fbbc0 */
                    /* catch() { ... } // from try @ 083fb9b4 with catch @ 083fbbc4
                       catch() { ... } // from try @ 083fbb58 with catch @ 083fbbc4 */
                    /* catch() { ... } // from try @ 083fb8b0 with catch @ 083fbbc8 */
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
      goto Unity_VisualScripting_FullSerializer_fsJsonParser__RunParse;
    }
  }
LAB_083fbbb0:
                    /* catch() { ... } // from try @ 083fb810 with catch @ 083fbbb0 */
                    /* catch() { ... } // from try @ 083fb7e8 with catch @ 083fbbb4 */
                    /* catch() { ... } // from try @ 083fb7b8 with catch @ 083fbbb8 */
  puVar4 = (undefined8 *)FUN_03f4b594(plVar9,*(long *)PTR_DAT_0918a430,0);
                    /* catch() { ... } // from try @ 083fb73c with catch @ 083fbbbc */
Unity_VisualScripting_FullSerializer_fsJsonParser__RunParse:
  (*(code *)*puVar4)(plVar9,puVar4[1]);
  *(undefined8 *)(in_stack_00000058 + 0x20) = in_stack_00000008;
  *(undefined8 *)(in_stack_00000058 + 0x18) = in_stack_00000000;
  *(undefined8 *)(in_stack_00000058 + 0x30) = in_stack_00000018;
  *(undefined8 *)(in_stack_00000058 + 0x28) = in_stack_00000010;
  thunk_FUN_03f86000(in_stack_00000058 + 0x18,0);
  *(undefined4 *)(in_stack_00000058 + 0x10) = 1;
  return 1;
}


