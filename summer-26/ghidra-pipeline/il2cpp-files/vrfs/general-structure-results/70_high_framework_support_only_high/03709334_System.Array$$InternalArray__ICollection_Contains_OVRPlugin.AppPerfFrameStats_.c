/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 03709334
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_AppPerfFrameStats>(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  uint *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  int iVar12;
  ulong unaff_x24;
  undefined8 *unaff_x25;
  uint uVar13;
  int iVar14;
  long unaff_x27;
  ulong unaff_x29;
  long *in_stack_00000000;
  undefined2 uStack0000000000000008;
  uint uStack000000000000000c;
  undefined *puVar8;
  
  do {
    FUN_0370a554(param_1);
    sVar4 = FUN_02521d48();
                    /* try { // try from 03709354 to 038093ff has its CatchHandler @ 03709354
                       catch() { ... } // from try @ 03709354 with catch @ 03709354
                       catch() { ... } // from try @ 03709588 with catch @ 03709354
                       catch() { ... } // from try @ 037095e4 with catch @ 03709354 */
    if (sVar4 == 0x5d) {
      iVar12 = *(int *)(unaff_x20 + 0x10);
      goto LAB_03709384;
    }
    sVar4 = FUN_02521d48();
    if (sVar4 != 0x2c) {
      FUN_011a9bc8();
      uStack0000000000000008 = FUN_02521d48();
      uVar5 = FUN_028eee90(&stack0x00000008,0);
      puVar8 = PTR_DAT_06de0f68;
LAB_037096c4:
      uVar7 = thunk_FUN_0159f088(puVar8);
      uVar5 = FUN_02519a6c(uVar7,uVar5,0);
LAB_037096d4:
      thunk_FUN_0159f088(PTR_DAT_06dde728);
      uVar7 = thunk_FUN_015d056c();
      FUN_011a9bc8();
      uVar9 = thunk_FUN_0159f088(PTR_DAT_06e4c650);
      FUN_028f287c(uVar7,uVar5,uVar9,0);
      uVar5 = thunk_FUN_0159f088(PTR_DAT_06e5ec68);
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar7,uVar5);
    }
    uStack000000000000000c = (int)unaff_x24 + 1;
    unaff_x24 = (ulong)uStack000000000000000c;
LAB_037091c4:
    iVar12 = *(int *)(unaff_x20 + 0x10);
    if (iVar12 <= (int)unaff_x24) {
LAB_03709384:
      if ((iVar12 <= (int)unaff_x24) || (sVar4 = FUN_02521d48(), sVar4 != 0x5d)) {
        thunk_FUN_0159f088(PTR_DAT_06dde728);
        uVar5 = thunk_FUN_015d056c();
        FUN_011a9bc8();
        puVar8 = PTR_DAT_06e13918;
        goto LAB_037097b4;
      }
      *in_stack_00000000 = unaff_x27;
      thunk_FUN_01656ef8(in_stack_00000000,unaff_x27);
LAB_0370917c:
      while( true ) {
        iVar12 = (int)unaff_x24;
        uVar13 = iVar12 + 1;
        unaff_x24 = (ulong)uVar13;
        if (*(int *)(unaff_x20 + 0x10) <= (int)uVar13) goto LAB_0370941c;
        uStack000000000000000c = uVar13;
        uVar3 = FUN_02521d48();
        if (0x2a < uVar3) break;
        if (uVar3 == 0x26) {
          if (*(char *)(unaff_x21 + 0x38) != '\0') {
            thunk_FUN_0159f088(PTR_DAT_06dde728);
            uVar5 = thunk_FUN_015d056c();
            FUN_011a9bc8();
            puVar8 = PTR_DAT_06d95878;
            goto LAB_037097b4;
          }
          *(undefined1 *)(unaff_x21 + 0x38) = 1;
        }
        else {
          if (uVar3 != 0x2a) {
LAB_037094d4:
                    /* try { // try from 037094d8 to 038094e3 has its CatchHandler @ 037095a8 */
            FUN_011a9bc8();
                    /* try { // try from 037094e8 to 038094ef has its CatchHandler @ 037095a4 */
            uStack0000000000000008 = FUN_02521d48();
                    /* try { // try from 037094f8 to 03809503 has its CatchHandler @ 037095ac */
            uVar5 = FUN_028eee90(&stack0x00000008,0);
            uVar7 = FUN_032194f0((long)&stack0x00000008 + 4,0);
                    /* try { // try from 03709510 to 03809537 has its CatchHandler @ 037095bc */
            uVar9 = thunk_FUN_0159f088(PTR_DAT_06d8e970);
            uVar6 = thunk_FUN_0159f088(PTR_DAT_06dcedf8);
                    /* try { // try from 0370953c to 0380954f has its CatchHandler @ 037095c4 */
            uVar5 = FUN_02526f2c(uVar9,uVar5,uVar6,uVar7,0);
            goto LAB_037096d4;
          }
          if (*(char *)(unaff_x21 + 0x38) != '\0') {
            thunk_FUN_0159f088(PTR_DAT_06dde728);
            uVar5 = thunk_FUN_015d056c();
            FUN_011a9bc8();
            puVar8 = PTR_DAT_06dc0978;
            goto LAB_037097b4;
          }
          if (iVar12 + 2 < *(int *)(unaff_x20 + 0x10)) {
            iVar12 = 0;
            do {
              iVar14 = iVar12;
              uVar1 = uVar13 + iVar14 + 1;
              sVar4 = FUN_02521d48();
              if (sVar4 != 0x2a) {
                iVar12 = iVar14 + 1;
                unaff_x24 = (ulong)(uVar13 + iVar14);
                goto LAB_037090e0;
              }
              uVar2 = uVar13 + iVar14 + 1;
              iVar12 = iVar14 + 1;
              uStack000000000000000c = uVar1;
            } while ((int)(uVar2 + 1) < *(int *)(unaff_x20 + 0x10));
            iVar12 = iVar14 + 2;
            unaff_x24 = (ulong)uVar2;
          }
          else {
            iVar12 = 1;
          }
LAB_037090e0:
          lVar10 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06d8bcf8);
          if (lVar10 == 0) goto LAB_037094d0;
          FUN_02d76b34(lVar10,0);
          *(int *)(lVar10 + 0x10) = iVar12;
LAB_03709178:
          FUN_0370a39c();
        }
      }
      if (uVar3 == 0x2c) {
        if ((unaff_x29 & 1) != 0) {
                    /* try { // try from 03709444 to 0380945f has its CatchHandler @ 037095c8 */
          iVar12 = *(int *)(unaff_x20 + 0x10);
          if ((int)uVar13 < iVar12) goto LAB_03709458;
          goto LAB_0370948c;
        }
        if ((unaff_x22 & 1) != 0) goto LAB_0370941c;
        if ((unaff_x23 & 1) != 0) {
          lVar10 = FUN_0252aef8();
          if (lVar10 == 0) goto LAB_037094d0;
          uVar5 = FUN_0252b348(lVar10,0);
          *unaff_x25 = uVar5;
          thunk_FUN_01656ef8();
          unaff_x24 = (ulong)*(uint *)(unaff_x20 + 0x10);
        }
        goto LAB_0370917c;
      }
      if (uVar3 != 0x5b) {
        if (uVar3 != 0x5d) goto LAB_037094d4;
        if ((unaff_x22 & 1) != 0) goto LAB_0370941c;
        thunk_FUN_0159f088(PTR_DAT_06dde728);
        uVar5 = thunk_FUN_015d056c();
        FUN_011a9bc8();
        puVar8 = PTR_DAT_06e078b8;
        goto LAB_037097b4;
      }
      if (*(char *)(unaff_x21 + 0x38) != '\0') {
                    /* catch() { ... } // from try @ 037094e8 with catch @ 037095a4
                       catch() { ... } // from try @ 03709584 with catch @ 037095a4 */
                    /* catch() { ... } // from try @ 037094d8 with catch @ 037095a8 */
                    /* catch() { ... } // from try @ 037094f8 with catch @ 037095ac */
        thunk_FUN_0159f088(PTR_DAT_06dde728);
                    /* catch() { ... } // from try @ 037094cc with catch @ 037095b0
                       catch() { ... } // from try @ 03709580 with catch @ 037095b0 */
        uVar5 = thunk_FUN_015d056c();
                    /* catch() { ... } // from try @ 03709400 with catch @ 037095b4 */
                    /* catch() { ... } // from try @ 037094ac with catch @ 037095b8 */
        FUN_011a9bc8();
        puVar8 = PTR_DAT_06dafb10;
                    /* catch() { ... } // from try @ 03709510 with catch @ 037095bc */
                    /* catch() { ... } // from try @ 03709474 with catch @ 037095c0 */
                    /* catch() { ... } // from try @ 0370953c with catch @ 037095c4 */
        goto LAB_037097b4;
      }
      uStack000000000000000c = iVar12 + 2;
      if (*(int *)(unaff_x20 + 0x10) <= (int)uStack000000000000000c) {
                    /* catch() { ... } // from try @ 03709444 with catch @ 037095c8 */
                    /* catch() { ... } // from try @ 03709418 with catch @ 037095cc */
        thunk_FUN_0159f088(PTR_DAT_06dde728);
        uVar5 = thunk_FUN_015d056c();
        FUN_011a9bc8();
        puVar8 = PTR_DAT_06e17ef0;
                    /* try { // try from 037095e0 to 038095e3 has its CatchHandler @ 037095fc */
                    /* try { // try from 037095e4 to 0380961b has its CatchHandler @ 03709354 */
        goto LAB_037097b4;
      }
      FUN_0370a4a4();
      uVar13 = uStack000000000000000c;
      unaff_x24 = (ulong)uStack000000000000000c;
      sVar4 = FUN_02521d48();
      if (((sVar4 == 0x2c) || (sVar4 = FUN_02521d48(), sVar4 == 0x2a)) ||
         (sVar4 = FUN_02521d48(), sVar4 == 0x5d)) {
        iVar12 = *(int *)(unaff_x20 + 0x10);
        if ((int)uVar13 < iVar12) {
          uVar13 = 0;
          iVar14 = 1;
          do {
            sVar4 = FUN_02521d48();
            if (sVar4 == 0x5d) {
              iVar12 = *(int *)(unaff_x20 + 0x10);
              break;
            }
            sVar4 = FUN_02521d48();
            if (sVar4 == 0x2a) {
              if (uVar13 != 0) {
                thunk_FUN_0159f088(PTR_DAT_06dde728);
                uVar5 = thunk_FUN_015d056c();
                FUN_011a9bc8();
                puVar8 = PTR_DAT_06dc3590;
                    /* try { // try from 03709564 to 03809567 has its CatchHandler @ 037095a0 */
                    /* try { // try from 03709568 to 0380956b has its CatchHandler @ 0370959c */
                goto LAB_037097b4;
              }
              uVar13 = 1;
            }
            else {
              sVar4 = FUN_02521d48();
              if (sVar4 != 0x2c) {
                    /* try { // try from 0370956c to 0380956f has its CatchHandler @ 03709598 */
                    /* try { // try from 03709570 to 03809573 has its CatchHandler @ 03709594 */
                FUN_011a9bc8();
                    /* try { // try from 03709574 to 03809577 has its CatchHandler @ 03709590 */
                    /* try { // try from 03709578 to 0380957b has its CatchHandler @ 0370958c */
                    /* try { // try from 0370957c to 0380957f has its CatchHandler @ 03709588 */
                    /* try { // try from 03709580 to 03809583 has its CatchHandler @ 037095b0 */
                uStack0000000000000008 = FUN_02521d48();
                    /* try { // try from 03709584 to 03809587 has its CatchHandler @ 037095a4 */
                    /* catch() { ... } // from try @ 0370957c with catch @ 03709588
                       try { // try from 03709588 to 038095df has its CatchHandler @ 03709354 */
                    /* catch() { ... } // from try @ 03709578 with catch @ 0370958c */
                    /* catch() { ... } // from try @ 03709574 with catch @ 03709590 */
                uVar5 = FUN_028eee90(&stack0x00000008,0);
                puVar8 = PTR_DAT_06df4700;
                    /* catch() { ... } // from try @ 03709570 with catch @ 03709594 */
                    /* catch() { ... } // from try @ 0370956c with catch @ 03709598 */
                    /* catch() { ... } // from try @ 03709568 with catch @ 0370959c */
                    /* catch() { ... } // from try @ 03709564 with catch @ 037095a0 */
                goto LAB_037096c4;
              }
              iVar14 = iVar14 + 1;
            }
            uStack000000000000000c = (int)unaff_x24 + 1;
            FUN_0370a4a4();
            unaff_x24 = (ulong)uStack000000000000000c;
            iVar12 = *(int *)(unaff_x20 + 0x10);
          } while ((int)uStack000000000000000c < iVar12);
        }
        else {
          uVar13 = 0;
          iVar14 = 1;
        }
        if (((int)unaff_x24 < iVar12) && (sVar4 = FUN_02521d48(), sVar4 == 0x5d)) {
          if (iVar14 < 2 || ((uVar13 ^ 0xffffffff) & 1) != 0) {
            lVar10 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e64340);
            if (lVar10 != 0) {
              FUN_02d8c788(lVar10,iVar14,uVar13,0);
              goto LAB_03709178;
            }
            goto LAB_037094d0;
          }
          thunk_FUN_0159f088(PTR_DAT_06dde728);
                    /* try { // try from 0370961c to 03809627 has its CatchHandler @ 03709628 */
          uVar5 = thunk_FUN_015d056c();
          FUN_011a9bc8();
          puVar8 = PTR_DAT_06e14bd0;
                    /* catch() { ... } // from try @ 0370961c with catch @ 03709628 */
        }
        else {
          thunk_FUN_0159f088(PTR_DAT_06dde728);
          uVar5 = thunk_FUN_015d056c();
                    /* catch() { ... } // from try @ 037095e0 with catch @ 037095fc */
          FUN_011a9bc8();
          puVar8 = PTR_DAT_06de4188;
        }
        goto LAB_037097b4;
      }
      unaff_x27 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e30510);
      if (unaff_x27 != 0) break;
      goto LAB_037094d0;
    }
    FUN_0370a4a4();
    uVar13 = uStack000000000000000c;
    sVar4 = FUN_02521d48();
    if (sVar4 == 0x5b) {
      uStack000000000000000c = uVar13 + 1;
      uVar5 = FUN_03708c68();
      lVar10 = *(long *)(unaff_x27 + 0x10);
      lVar11 = *(long *)PTR_DAT_06e40f98;
      *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_037094d0;
      uVar13 = *(uint *)(unaff_x27 + 0x18);
      if (uVar13 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(unaff_x27 + 0x18) = uVar13 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar13 * 8 + 0x20) = uVar5;
        thunk_FUN_01656ef8();
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))(unaff_x27);
      }
      uVar13 = uStack000000000000000c;
      FUN_0370a554(uStack000000000000000c);
      sVar4 = FUN_02521d48();
      if (sVar4 != 0x5d) {
        FUN_011a9bc8();
        uStack0000000000000008 = FUN_02521d48();
        uVar5 = FUN_028eee90(&stack0x00000008,0);
        puVar8 = PTR_DAT_06e02228;
        goto LAB_037096c4;
      }
      uStack000000000000000c = uVar13 + 1;
    }
    else {
      uVar5 = FUN_03708c68();
      lVar10 = *(long *)(unaff_x27 + 0x10);
      lVar11 = *(long *)PTR_DAT_06e40f98;
      *(int *)(unaff_x27 + 0x1c) = *(int *)(unaff_x27 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_037094d0;
      uVar13 = *(uint *)(unaff_x27 + 0x18);
      if (uVar13 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(unaff_x27 + 0x18) = uVar13 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar13 * 8 + 0x20) = uVar5;
        thunk_FUN_01656ef8();
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))(unaff_x27);
      }
    }
    param_1 = (ulong)uStack000000000000000c;
    unaff_x24 = param_1;
  } while( true );
  FUN_043c1bd8(unaff_x27,*(undefined8 *)PTR_DAT_06e31198);
  if (*(long *)(unaff_x21 + 0x30) != 0) {
    thunk_FUN_0159f088(PTR_DAT_06dde728);
    uVar5 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    puVar8 = PTR_DAT_06dbc030;
LAB_037097b4:
    uVar7 = thunk_FUN_0159f088(puVar8);
    uVar9 = thunk_FUN_0159f088(PTR_DAT_06e4c650);
    FUN_028f287c(uVar5,uVar7,uVar9,0);
    goto LAB_037097dc;
  }
  goto LAB_037091c4;
  while( true ) {
                    /* try { // try from 03709474 to 0380948b has its CatchHandler @ 037095c0 */
    iVar12 = *(int *)(unaff_x20 + 0x10);
    uVar13 = uVar13 + 1;
    unaff_x24 = (ulong)uVar13;
    if (iVar12 <= (int)uVar13) break;
LAB_03709458:
    uVar13 = (uint)unaff_x24;
    sVar4 = FUN_02521d48();
    if (sVar4 == 0x5d) {
      iVar12 = *(int *)(unaff_x20 + 0x10);
      break;
    }
  }
LAB_0370948c:
  if (iVar12 <= (int)uVar13) {
    thunk_FUN_0159f088(PTR_DAT_06dde728);
    uVar5 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    uVar7 = thunk_FUN_0159f088(PTR_DAT_06e26c78);
    FUN_028f9010(uVar5,uVar7,0);
LAB_037097dc:
    uVar7 = thunk_FUN_0159f088(PTR_DAT_06e5ec68);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar5,uVar7);
  }
  lVar10 = FUN_025284f8();
                    /* try { // try from 037094ac to 038094b3 has its CatchHandler @ 037095b8 */
  if (lVar10 != 0) {
    uVar5 = FUN_0252b348(lVar10,0);
    *unaff_x25 = uVar5;
    thunk_FUN_01656ef8();
LAB_0370941c:
    *unaff_x19 = uVar13;
    return;
  }
LAB_037094d0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


