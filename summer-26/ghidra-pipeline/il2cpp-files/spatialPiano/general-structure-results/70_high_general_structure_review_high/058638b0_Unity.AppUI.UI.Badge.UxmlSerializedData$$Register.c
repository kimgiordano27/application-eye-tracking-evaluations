/*
FUNCTION_NAME: Unity.AppUI.UI.Badge.UxmlSerializedData$$Register
ENTRY_POINT: 058638b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


long Unity_AppUI_UI_Badge_UxmlSerializedData__Register(void)

{
  bool bVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  short sVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  short *psVar13;
  int iVar14;
  long unaff_x19;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 in_stack_00000028;
  
  uVar9 = FUN_05865050();
  lVar10 = 0x18;
  if ((uVar9 & 1) == 0) {
    lVar10 = 0x10;
  }
  if (*(long *)(unaff_x19 + lVar10) == 0) goto LAB_05863e2c;
  uVar9 = FUN_04f6dd04(*(long *)(unaff_x19 + lVar10),
                       *(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>_get_raycastMask__
                       ,4,0);
  if (((uVar9 & 1) != 0) && (uVar9 = FUN_05864100(), (uVar9 & 1) == 0)) {
    lVar10 = *(long *)(unaff_x19 + 0x38);
    if (lVar10 != 0) {
      uVar16 = (uint)*(ushort *)(lVar10 + 0x2c);
                    /* try { // try from 05863c70 to 05963c97 has its CatchHandler @ 05863df8 */
      do {
        bVar7 = *(ushort *)(lVar10 + 0x30) <= uVar16;
        bVar1 = !bVar7;
        if (bVar7) goto LAB_058638fc;
        uVar9 = FUN_05865050();
        lVar10 = 0x18;
        if ((uVar9 & 1) == 0) {
          lVar10 = 0x10;
        }
        if (*(long *)(unaff_x19 + lVar10) == 0) break;
                    /* try { // try from 05863ca4 to 05963cab has its CatchHandler @ 05863df0 */
        sVar8 = FUN_04f69818(*(long *)(unaff_x19 + lVar10),uVar16,0);
        if (sVar8 != 0x2f) goto LAB_058638fc;
                    /* try { // try from 05863cb8 to 05963ccf has its CatchHandler @ 05863dec */
        lVar10 = *(long *)(unaff_x19 + 0x38);
        uVar16 = uVar16 + 1;
      } while (lVar10 != 0);
    }
    goto LAB_05863e2c;
  }
  bVar1 = false;
LAB_058638fc:
  puVar5 = UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo;
  uVar9 = *(ulong *)(unaff_x19 + 0x30);
  if ((uVar9 & 0x18000000) == 0) {
    bVar7 = false;
  }
  else {
    lVar10 = *(long *)UnityEngine_UIElements_ChangeEvent<Color>_TypeInfo;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar10 = *(long *)puVar5;
    }
    if (*(char *)(*(long *)(lVar10 + 0xb8) + 0x72) == '\0') {
      bVar7 = (*(byte *)(unaff_x19 + 0x33) & 0x10) == 0;
    }
    else {
      bVar7 = true;
    }
  }
  if (!bVar7 && !bVar1) {
    lVar10 = FUN_05864c54();
    return lVar10;
  }
  FUN_058612c4();
  if ((bVar1) || (uVar12 = *(ulong *)(unaff_x19 + 0x30), (uVar12 & 0x2014) != 0)) {
    lVar10 = *(long *)(unaff_x19 + 0x38);
    in_stack_00000028._4_4_ = 0;
    if ((lVar10 == 0) || (lVar11 = *(long *)(lVar10 + 0x10), lVar11 == 0)) goto LAB_05863e2c;
    uVar3 = *(ushort *)(lVar10 + 0x30);
    uVar16 = (uint)uVar3;
    lVar10 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca110,
                          (*(int *)(lVar11 + 0x10) - (uint)uVar3) + (uint)*(ushort *)(lVar10 + 0x34)
                          + 3);
    if (bVar1 || (uVar9 >> 0x1c & 1) != 0) {
      if (lVar10 == 0) goto LAB_05863e2c;
      if ((*(int *)(lVar10 + 0x18) == 0) ||
         (*(undefined2 *)(lVar10 + 0x20) = 0x5c,
         puVar6 = Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__,
         *(int *)(lVar10 + 0x18) == 1)) goto LAB_05863e30;
      *(undefined2 *)(lVar10 + 0x22) = 0x5c;
      uVar2 = *(undefined4 *)(lVar11 + 0x10);
      in_stack_00000028._4_4_ = 2;
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_0589244c(lVar11,0,uVar2,lVar10,(long)&stack0x00000028 + 4,0xffff,0xffff,0xffff);
      uVar15 = in_stack_00000028._4_4_;
    }
    else {
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_05863e2c;
      sVar8 = FUN_04f69818(*(long *)(unaff_x19 + 0x10),(uint)uVar3,0);
                    /* try { // try from 05863afc to 05963b93 has its CatchHandler @ 05863afc
                       catch() { ... } // from try @ 05863afc with catch @ 05863afc
                       catch() { ... } // from try @ 05863dd4 with catch @ 05863afc
                       catch() { ... } // from try @ 05863e4c with catch @ 05863afc
                       catch() { ... } // from try @ 05863f20 with catch @ 05863afc
                       catch() { ... } // from try @ 05863f40 with catch @ 05863afc */
      if (sVar8 != 0x2f) {
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_05863e2c;
        sVar8 = FUN_04f69818(*(long *)(unaff_x19 + 0x10),(uint)uVar3,0);
        if (sVar8 != 0x5c) {
          uVar15 = 0;
          goto LAB_05863ccc;
        }
      }
      uVar15 = 0;
      uVar16 = uVar3 + 1;
    }
LAB_05863ccc:
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      uVar17 = *(undefined8 *)(unaff_x19 + 0x10);
      uVar4 = *(undefined2 *)(*(long *)(unaff_x19 + 0x38) + 0x32);
                    /* try { // try from 05863cfc to 05963d1b has its CatchHandler @ 05863e1c */
      if (*(int *)(*(long *)Method_Unity_AppUI_Core_GestureRecognizer<float>__ctor__ + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_0589244c(uVar17,uVar16,uVar4,lVar10,(long)&stack0x00000028 + 4,0xffff,0xffff,0xffff);
      if (lVar10 != 0) {
                    /* try { // try from 05863d4c to 05963d6f has its CatchHandler @ 05863de4 */
        if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
          if (*(short *)(lVar10 + 0x22) == 0x7c) {
            *(undefined2 *)(lVar10 + 0x22) = 0x3a;
          }
          uVar9 = *(ulong *)(unaff_x19 + 0x30);
          if (((uint)uVar9 >> 0xd & 1) != 0) {
            uVar17 = *(undefined8 *)(unaff_x19 + 0x20);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
                    /* try { // try from 05863d90 to 05963d93 has its CatchHandler @ 05863e18 */
                    /* try { // try from 05863d94 to 05963d97 has its CatchHandler @ 05863e14 */
                    /* try { // try from 05863d98 to 05963d9b has its CatchHandler @ 05863e0c */
                    /* try { // try from 05863d9c to 05963d9f has its CatchHandler @ 05863e08 */
            FUN_05864788(lVar10,((uint)(uVar9 >> 0x1a) & 2) + uVar15,(long)&stack0x00000028 + 4,
                         uVar17);
          }
                    /* try { // try from 05863da0 to 05963da3 has its CatchHandler @ 05863de0 */
                    /* try { // try from 05863da4 to 05963da7 has its CatchHandler @ 05863ddc */
                    /* try { // try from 05863da8 to 05963db3 has its CatchHandler @ 05863dec */
          if ((in_stack_00000028._4_4_ & 0xffff) != 0) {
            uVar15 = *(uint *)(lVar10 + 0x18);
            uVar16 = 0;
                    /* try { // try from 05863db4 to 05963dcb has its CatchHandler @ 05863dd4 */
            do {
              if (uVar15 <= uVar16) goto LAB_05863e30;
              psVar13 = (short *)(lVar10 + (ulong)uVar16 * 2 + 0x20);
                    /* try { // try from 05863dcc to 05963dd3 has its CatchHandler @ 05863de4 */
              if (*psVar13 == 0x2f) {
                    /* catch() { ... } // from try @ 05863db4 with catch @ 05863dd4
                       try { // try from 05863dd4 to 05963e47 has its CatchHandler @ 05863afc */
                *psVar13 = 0x5c;
              }
                    /* catch() { ... } // from try @ 05863c20 with catch @ 05863dd8 */
              uVar16 = uVar16 + 1;
                    /* catch() { ... } // from try @ 05863da4 with catch @ 05863ddc */
                    /* catch() { ... } // from try @ 05863da0 with catch @ 05863de0 */
            } while (uVar16 < (in_stack_00000028._4_4_ & 0xffff));
          }
                    /* catch() { ... } // from try @ 05863d4c with catch @ 05863de4
                       catch() { ... } // from try @ 05863dcc with catch @ 05863de4 */
                    /* catch() { ... } // from try @ 05863c38 with catch @ 05863de8 */
                    /* catch() { ... } // from try @ 05863cb8 with catch @ 05863dec
                       catch() { ... } // from try @ 05863da8 with catch @ 05863dec */
                    /* catch() { ... } // from try @ 05863ca4 with catch @ 05863df0 */
                    /* catch() { ... } // from try @ 05863c00 with catch @ 05863df4 */
          lVar10 = FUN_04f754a0(0,lVar10,0,in_stack_00000028._4_4_,0);
          return lVar10;
                    /* catch() { ... } // from try @ 05863c70 with catch @ 05863df8 */
        }
LAB_05863e30:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
    }
    goto LAB_05863e2c;
  }
  lVar10 = *(long *)(unaff_x19 + 0x38);
  uVar16 = (uint)uVar12;
  if ((uVar16 >> 0x1c & 1) == 0) {
    if (lVar10 == 0) goto LAB_05863e2c;
    uVar15 = (uint)*(ushort *)(lVar10 + 0x30);
  }
  else {
    if (lVar10 == 0) goto LAB_05863e2c;
    uVar15 = *(ushort *)(lVar10 + 0x2c) - 2;
  }
  if ((((uVar16 >> 0x1d & 1) == 0) ||
      (((uint)(uVar12 >> 0x1a) & 2 ^ (uint)*(ushort *)(lVar10 + 0x2c)) != 2)) ||
     (*(short *)(lVar10 + 0x32) != *(short *)(lVar10 + 0x36))) {
    lVar11 = *(long *)(unaff_x19 + 0x10);
    if ((uVar16 >> 0x1b & 1) == 0) {
joined_r0x05863e28:
      if (lVar11 == 0) goto LAB_05863e2c;
      iVar14 = *(ushort *)(lVar10 + 0x32) - uVar15;
    }
    else {
      if (lVar11 == 0) goto LAB_05863e2c;
      sVar8 = FUN_04f69818(lVar11,uVar15,0);
      if (sVar8 != 0x2f) {
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_05863e2c;
        sVar8 = FUN_04f69818(*(long *)(unaff_x19 + 0x10),uVar15,0);
        if (sVar8 != 0x5c) {
                    /* catch() { ... } // from try @ 05863cfc with catch @ 05863e1c */
          lVar10 = *(long *)(unaff_x19 + 0x38);
          if (lVar10 == 0) goto LAB_05863e2c;
          lVar11 = *(long *)(unaff_x19 + 0x10);
          goto joined_r0x05863e28;
        }
      }
      if ((*(long *)(unaff_x19 + 0x38) == 0) || (lVar11 = *(long *)(unaff_x19 + 0x10), lVar11 == 0))
      goto LAB_05863e2c;
      uVar16 = ~uVar15;
      uVar15 = uVar15 + 1;
      iVar14 = *(ushort *)(*(long *)(unaff_x19 + 0x38) + 0x32) + uVar16;
    }
    lVar10 = FUN_04f71378(lVar11,uVar15,iVar14,0);
                    /* try { // try from 05863b94 to 05963b9b has its CatchHandler @ 05863e10 */
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 0x10);
  }
  if ((*(byte *)(unaff_x19 + 0x33) >> 3 & 1) != 0) {
    if (lVar10 == 0) goto LAB_05863e2c;
                    /* try { // try from 05863ba4 to 05963baf has its CatchHandler @ 05863e04 */
    sVar8 = FUN_04f69818(lVar10,1,0);
    if (sVar8 != 0x7c) goto LAB_05863bf8;
                    /* try { // try from 05863bc8 to 05963bdb has its CatchHandler @ 05863e00 */
    lVar10 = FUN_04f7113c(lVar10,1,1,0);
    if (lVar10 == 0) goto LAB_05863e2c;
                    /* try { // try from 05863be8 to 05963bef has its CatchHandler @ 05863dfc */
    lVar10 = FUN_04f70300(lVar10,1,*(undefined8 *)PTR_DAT_067ce970,0);
  }
  if (lVar10 != 0) {
LAB_05863bf8:
                    /* try { // try from 05863c00 to 05963c0f has its CatchHandler @ 05863df4 */
    if (0 < *(int *)(lVar10 + 0x10)) {
      iVar14 = 0;
      do {
        sVar8 = FUN_04f69818(lVar10,iVar14,0);
                    /* try { // try from 05863c20 to 05963c27 has its CatchHandler @ 05863dd8 */
        if (sVar8 == 0x2f) {
                    /* try { // try from 05863c38 to 05963c5f has its CatchHandler @ 05863de8 */
          lVar10 = FUN_04f714c8(lVar10,0x2f,0x5c,0);
          return lVar10;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar10 + 0x10));
    }
                    /* catch() { ... } // from try @ 05863be8 with catch @ 05863dfc */
                    /* catch() { ... } // from try @ 05863bc8 with catch @ 05863e00 */
                    /* catch() { ... } // from try @ 05863ba4 with catch @ 05863e04 */
                    /* catch() { ... } // from try @ 05863d9c with catch @ 05863e08 */
                    /* catch() { ... } // from try @ 05863d98 with catch @ 05863e0c */
                    /* catch() { ... } // from try @ 05863b94 with catch @ 05863e10 */
                    /* catch() { ... } // from try @ 05863d94 with catch @ 05863e14 */
                    /* catch() { ... } // from try @ 05863d90 with catch @ 05863e18 */
    return lVar10;
  }
LAB_05863e2c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


