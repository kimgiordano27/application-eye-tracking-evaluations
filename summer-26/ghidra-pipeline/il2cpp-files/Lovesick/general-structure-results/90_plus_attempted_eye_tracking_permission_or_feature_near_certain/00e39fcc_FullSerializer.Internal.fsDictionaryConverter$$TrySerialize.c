/*
FUNCTION_NAME: FullSerializer.Internal.fsDictionaryConverter$$TrySerialize
ENTRY_POINT: 00e39fcc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 134
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void FullSerializer_Internal_fsDictionaryConverter__TrySerialize(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined2 uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  uint *puVar16;
  long unaff_x19;
  int iVar17;
  ulong *unaff_x20;
  long *unaff_x21;
  int iVar18;
  long unaff_x22;
  uint uVar19;
  uint uVar20;
  uint unaff_w24;
  uint uVar21;
  long lVar22;
  long lVar23;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  float unaff_s8;
  float unaff_s9;
  float fVar31;
  float fVar32;
  ulong *in_stack_00000010;
  long *in_stack_00000018;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  ulong in_stack_00000030;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  undefined4 in_stack_00000050;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  undefined4 in_stack_00000090;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  undefined4 in_stack_000000d0;
  ulong in_stack_000000e0;
  ulong in_stack_000000e8;
  ulong in_stack_000000f0;
  ulong in_stack_000000f8;
  ulong in_stack_00000100;
  ulong in_stack_00000108;
  undefined4 in_stack_00000110;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  undefined4 in_stack_00000150;
  long in_stack_00000160;
  long in_stack_00000168;
  long in_stack_00000170;
  long in_stack_00000178;
  long in_stack_00000180;
  long in_stack_00000188;
  undefined4 in_stack_00000190;
  ulong in_stack_000001a0;
  ulong in_stack_000001a8;
  ulong in_stack_000001b0;
  ulong in_stack_000001b8;
  ulong in_stack_000001c0;
  ulong in_stack_000001c8;
  undefined4 in_stack_000001d0;
  float fStack00000000000001e0;
  ulong in_stack_000001e8;
  long in_stack_00000218;
  
  do {
    thunk_FUN_00d32864();
    uVar20 = unaff_w24;
    do {
                    /* catch() { ... } // from try @ 00e39f78 with catch @ 00e39fd0
                       catch() { ... } // from try @ 00e39fc4 with catch @ 00e39fd0
                       try { // try from 00e39fd0 to 00f3a027 has its CatchHandler @ 00e39860 */
                    /* catch() { ... } // from try @ 00e39f70 with catch @ 00e39fd4
                       catch() { ... } // from try @ 00e39fb8 with catch @ 00e39fd4 */
      uVar10 = FUN_01731954(0);
                    /* catch() { ... } // from try @ 00e39f68 with catch @ 00e39fd8
                       catch() { ... } // from try @ 00e39fac with catch @ 00e39fd8 */
                    /* catch() { ... } // from try @ 00e39f60 with catch @ 00e39fdc
                       catch() { ... } // from try @ 00e39fa0 with catch @ 00e39fdc */
                    /* catch() { ... } // from try @ 00e39f58 with catch @ 00e39fe0
                       catch() { ... } // from try @ 00e39f94 with catch @ 00e39fe0 */
                    /* catch() { ... } // from try @ 00e39a80 with catch @ 00e39fe4 */
                    /* catch() { ... } // from try @ 00e39c38 with catch @ 00e39fe8 */
                    /* catch() { ... } // from try @ 00e39d00 with catch @ 00e39fec */
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 00e39dc8 with catch @ 00e39ff0 */
                    /* catch() { ... } // from try @ 00e39aa8 with catch @ 00e39ff4 */
        thunk_FUN_00d32864(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo);
      }
                    /* catch() { ... } // from try @ 00e39b70 with catch @ 00e39ff8 */
      uVar10 = FUN_016f8fb8(&stack0x00000214,uVar10,0);
      if (unaff_x22 == 0) goto LAB_00e3b024;
      uVar10 = FUN_01600e54(unaff_x22,uVar20,uVar10,0);
      *(undefined8 *)(unaff_x19 + 0x78) = uVar10;
                    /* try { // try from 00e3a028 to 00f3a063 has its CatchHandler @ 00e3a028
                       catch(type#1 @ 00000000) { ... } // from try @ 00e3a028 with catch @ 00e3a028
                       catch(type#1 @ 00000000) { ... } // from try @ 00e3a0b4 with catch @ 00e3a028
                        */
      if ((*(long *)(unaff_x19 + 0x48) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar20,&stack0x000001e0,*unaff_x27),
         _fStack00000000000001e0 == 0)) goto LAB_00e3b024;
      FUN_00e5eb18(_fStack00000000000001e0,*(undefined1 *)(unaff_x19 + 0x37d),0);
      uVar21 = uVar20;
LAB_00e3a5f8:
      if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
      fVar31 = *(float *)(*(long *)(unaff_x19 + 0x500) + 0x74);
      do {
        uVar21 = uVar21 + 1;
        if (*(int *)(unaff_x19 + 0x4f8) <= (int)uVar21) {
          if (*(char *)(unaff_x19 + 0x370) != '\0') {
            uVar10 = FUN_00e47070();
            *(undefined8 *)(unaff_x19 + 0x78) = uVar10;
          }
          FUN_00e4c428();
          puVar4 = StringLiteral_4747;
          puVar3 = OVREyeGaze_TypeInfo;
          if (*(int *)(unaff_x19 + 0x4f8) < 1) {
            uVar26 = 0;
          }
          else {
            if ((*(long *)(unaff_x19 + 0x48) == 0) ||
               (FUN_0132138c(*(long *)(unaff_x19 + 0x48),0,&stack0x000001e0,*unaff_x27),
               _fStack00000000000001e0 == 0)) goto LAB_00e3b024;
            uVar26 = *(undefined4 *)(_fStack00000000000001e0 + 0x74);
          }
          lVar11 = *(long *)(unaff_x19 + 0x58);
          *(undefined4 *)(unaff_x19 + 0x440) = uVar26;
          if (lVar11 == 0) goto LAB_00e3b024;
          if (*(int *)(lVar11 + 0x18) < 1) {
            fVar31 = *(float *)(unaff_x19 + 0x104);
          }
          else {
            FUN_0132138c(lVar11,0,&stack0x000001e0,*(undefined8 *)puVar3);
            fVar31 = fStack00000000000001e0;
          }
          *(float *)(unaff_x19 + 0x444) = -fVar31;
          if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
          iVar17 = *(int *)(*(long *)(unaff_x19 + 0x78) + 0x10);
          if (iVar17 < 1) goto LAB_00e3aef4;
          iVar8 = 0;
          iVar18 = 0;
          goto LAB_00e3ace0;
        }
        if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e3b024;
        FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar21,&stack0x000001e0,*unaff_x27);
        *(ulong *)(unaff_x19 + 0x500) = _fStack00000000000001e0;
        if (_fStack00000000000001e0 == 0) goto LAB_00e3b024;
        uVar10 = *(undefined8 *)(_fStack00000000000001e0 + 0xf8);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_02681b9c(uVar10,0,0);
        plVar13 = unaff_x21;
        if ((uVar12 & 1) != 0) {
          if ((*(long *)(unaff_x19 + 0x500) == 0) ||
             (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x500) + 0xf8), lVar11 == 0))
          goto LAB_00e3b024;
          plVar13 = (long *)(lVar11 + 0x18);
        }
        lVar11 = *plVar13;
        *(long *)(unaff_x19 + 0x450) = lVar11;
        uVar26 = FUN_00e4b938(uVar12,lVar11,*(undefined8 *)(unaff_x19 + 0x500));
        if (lVar11 == 0) goto LAB_00e3b024;
        uVar10 = FUN_0272bf48(lVar11,10,unaff_x20,uVar26,*(undefined4 *)(unaff_x19 + 0x11c),0);
        lVar11 = *(long *)(unaff_x19 + 0x450);
        uVar26 = FUN_00e4b938(uVar10,lVar11,*(undefined8 *)(unaff_x19 + 0x500));
        if (lVar11 == 0) goto LAB_00e3b024;
        uVar10 = FUN_0272bfb4(lVar11,*(undefined8 *)
                                      Method_System_Xml_XsdValidatingReader_MoveToAttribute__,uVar26
                              ,*(undefined4 *)(unaff_x19 + 0x11c),0);
        lVar11 = *(long *)(unaff_x19 + 0x450);
        uVar26 = FUN_00e4b938(uVar10,lVar11,*(undefined8 *)(unaff_x19 + 0x500));
        if (lVar11 == 0) goto LAB_00e3b024;
        FUN_0272bf48(lVar11,0xad,in_stack_00000018,uVar26,*(undefined4 *)(unaff_x19 + 0x11c),0);
        if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
        sVar7 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),uVar21,0);
        if (sVar7 == 10) {
LAB_00e39d14:
          lVar11 = *(long *)(unaff_x19 + 0x500);
          if (lVar11 == 0) goto LAB_00e3b024;
          fVar31 = *(float *)(lVar11 + 0x74);
          *(float *)(lVar11 + 0x44) = fVar31;
        }
        else {
          if (*unaff_x28 == 0) goto LAB_00e3b024;
          sVar7 = FUN_015fa29c(*unaff_x28,uVar21,0);
          if (sVar7 == 0xd) goto LAB_00e39d14;
          if (*unaff_x28 == 0) goto LAB_00e3b024;
          sVar7 = FUN_015fa29c(*unaff_x28,uVar21,0);
          lVar11 = *(long *)(unaff_x19 + 0x500);
          if (lVar11 == 0) goto LAB_00e3b024;
          *(float *)(lVar11 + 0x44) = fVar31;
          if (sVar7 == 9) {
            fVar32 = *(float *)(unaff_x19 + 0x138) * unaff_s9 * *(float *)(lVar11 + 0x80);
            fVar24 = *(float *)(unaff_x19 + 0x25c) + fVar32;
          }
          else {
            fVar32 = (float)FUN_00e5ef60(*(undefined4 *)(unaff_x19 + 0x134),lVar11,0);
            if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
            fVar24 = *(float *)(unaff_x19 + 0x25c);
            fVar25 = (float)FUN_00e5ef60(*(undefined4 *)(unaff_x19 + 0x134),
                                         *(long *)(unaff_x19 + 0x500),0);
            fVar24 = fVar24 + fVar25;
          }
          fVar31 = fVar31 + fVar32;
          *(float *)(unaff_x19 + 0x25c) = fVar24;
        }
      } while ((fVar31 <= *(float *)(unaff_x19 + 0x4f4)) ||
              (iVar17 = uVar20 + 1, unaff_x20 = in_stack_00000010, (int)uVar21 <= iVar17));
      lVar11 = *unaff_x29;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *unaff_x29;
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
      if (lVar11 == 0) goto LAB_00e3b024;
      uVar10 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                            *(undefined4 *)(lVar11 + 0x18));
      uVar12 = 0;
      *(undefined8 *)(unaff_x19 + 0x438) = uVar10;
      while( true ) {
        lVar11 = *unaff_x29;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar11 = *unaff_x29;
        }
        lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
        if (lVar14 == 0) goto LAB_00e3b024;
        lVar23 = *(long *)(unaff_x19 + 0x438);
        if ((long)*(int *)(lVar14 + 0x18) <= (long)uVar12) break;
        lVar22 = *unaff_x28;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar14 = *(long *)(*(long *)(*unaff_x29 + 0xb8) + 8);
          if (lVar14 == 0) goto LAB_00e3b024;
        }
        FUN_0132138c(lVar14,uVar12 & 0xffffffff,&stack0x000001e0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<CatchAssistData>_get_Item__);
        if ((lVar22 == 0) ||
           (uVar26 = FUN_01605170(lVar22,_fStack00000000000001e0 & 0xffff,uVar21,0), lVar23 == 0))
        goto LAB_00e3b024;
        if (*(uint *)(lVar23 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar11 = uVar12 * 4;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(lVar23 + lVar11 + 0x20) = uVar26;
      }
      if (lVar23 == 0) goto LAB_00e3b024;
      iVar8 = (int)*(ulong *)(lVar23 + 0x18);
      if (iVar8 == 0) {
        unaff_w24 = 0;
      }
      else {
        unaff_w24 = *(uint *)(lVar23 + 0x20);
        if (1 < iVar8) {
          lVar11 = (*(ulong *)(lVar23 + 0x18) & 0xffffffff) - 1;
          puVar16 = (uint *)(lVar23 + 0x24);
          uVar19 = unaff_w24;
          do {
            unaff_w24 = *puVar16;
            if ((int)*puVar16 <= (int)uVar19) {
              unaff_w24 = uVar19;
            }
            lVar11 = lVar11 + -1;
            puVar16 = puVar16 + 1;
            uVar19 = unaff_w24;
          } while (lVar11 != 0);
        }
      }
      if (*unaff_x28 == 0) goto LAB_00e3b024;
      iVar8 = FUN_01605170(*unaff_x28,10,uVar21,0);
      if ((((int)unaff_w24 <= iVar8) || (unaff_w24 == 0xffffffff)) ||
         (*(char *)(unaff_x19 + 0x142) != '\0')) {
        uVar19 = uVar21;
        if (0 < (int)uVar21) {
          do {
            lVar11 = *unaff_x29;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar11 = *unaff_x29;
            }
            if (*unaff_x28 == 0) goto LAB_00e3b024;
                    /* try { // try from 00e3a084 to 00f3a08b has its CatchHandler @ 00e3a0a4 */
            uVar20 = uVar19 - 1;
            lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
            uVar6 = FUN_015fa29c(*unaff_x28,uVar20,0);
            if (lVar11 == 0) goto LAB_00e3b024;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3a084 with catch @ 00e3a0a4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3a064 with catch @ 00e3a0a8
                        */
                    /* try { // try from 00e3a0ac to 00f3a0b3 has its CatchHandler @ 00e3a0bc */
            _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar6);
                    /* try { // try from 00e3a0b4 to 00f3a0bf has its CatchHandler @ 00e3a028 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3a0ac with catch @ 00e3a0bc
                        */
            uVar12 = FUN_01322618(lVar11,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
                    /* try { // try from 00e3a0c0 to 00f3a0f3 has its CatchHandler @ 00e3a0c0
                       catch(type#1 @ 00000000) { ... } // from try @ 00e3a0c0 with catch @ 00e3a0c0
                       catch(type#1 @ 00000000) { ... } // from try @ 00e3a144 with catch @ 00e3a0c0
                        */
            if ((uVar12 & 1) == 0) {
              lVar11 = *unaff_x28;
              if (lVar11 == 0) goto LAB_00e3b024;
              if ((int)uVar19 < *(int *)(lVar11 + 0x10)) {
                lVar14 = *unaff_x29;
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_00d32864(lVar14);
                  lVar11 = *unaff_x28;
                  if (lVar11 == 0) goto LAB_00e3b024;
                    /* try { // try from 00e3a0f4 to 00f3a10f has its CatchHandler @ 00e3a138 */
                  lVar14 = *unaff_x29;
                }
                lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
                uVar6 = FUN_015fa29c(lVar11,uVar19,0);
                if (lVar14 == 0) goto LAB_00e3b024;
                    /* try { // try from 00e3a114 to 00f3a11b has its CatchHandler @ 00e3a134 */
                _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar6);
                uVar12 = FUN_01322618(lVar14,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
                uVar1 = uVar19;
                if ((uVar12 & 1) == 0) goto joined_r0x00e3a144;
              }
            }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3a114 with catch @ 00e3a134
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3a0f4 with catch @ 00e3a138
                        */
            uVar19 = uVar20;
          } while (iVar17 < (int)uVar20);
                    /* try { // try from 00e3a13c to 00f3a143 has its CatchHandler @ 00e3a14c */
          uVar19 = 0xffffffff;
          uVar1 = uVar19;
joined_r0x00e3a144:
          do {
            do {
              do {
                do {
                  do {
                    do {
                      uVar2 = uVar1;
                    /* try { // try from 00e3a144 to 00f3a14f has its CatchHandler @ 00e3a0c0 */
                      if ((int)uVar2 <= iVar17) goto LAB_00e3a2c0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3a13c with catch @ 00e3a14c
                        */
                    /* try { // try from 00e3a150 to 00f3a1f7 has its CatchHandler @ 00e3a150
                       catch() { ... } // from try @ 00e3a150 with catch @ 00e3a150
                       catch() { ... } // from try @ 00e3a2d0 with catch @ 00e3a150 */
                      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e3b024;
                      uVar1 = uVar2 - 1;
                      FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar1,&stack0x000001e0,*unaff_x27);
                      if (_fStack00000000000001e0 == 0) goto LAB_00e3b024;
                    } while (*(float *)(_fStack00000000000001e0 + 0x44) /
                             *(float *)(unaff_x19 + 0x4f4) <= unaff_s8);
                    lVar11 = *unaff_x28;
                    if (lVar11 == 0) goto LAB_00e3b024;
                  } while (*(int *)(lVar11 + 0x10) <= (int)uVar2);
                  lVar14 = *unaff_x29;
                  if (*(int *)(lVar14 + 0xe0) == 0) {
                    thunk_FUN_00d32864(lVar14);
                    lVar11 = *unaff_x28;
                    if (lVar11 == 0) goto LAB_00e3b024;
                    lVar14 = *unaff_x29;
                  }
                  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
                  uVar6 = FUN_015fa29c(lVar11,uVar2,0);
                  if (lVar14 == 0) goto LAB_00e3b024;
                  _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar6);
                  uVar12 = FUN_01322618(lVar14,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
                } while ((uVar12 & 1) == 0);
                lVar11 = *unaff_x29;
                    /* try { // try from 00e3a1f8 to 00f3a20b has its CatchHandler @ 00e3a314 */
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar11 = *unaff_x29;
                }
                if (*unaff_x28 == 0) goto LAB_00e3b024;
                lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
                uVar6 = FUN_015fa29c(*unaff_x28,uVar1,0);
                if (lVar11 == 0) goto LAB_00e3b024;
                    /* try { // try from 00e3a228 to 00f3a22f has its CatchHandler @ 00e3a320 */
                _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar6);
                uVar12 = FUN_01322618(lVar11,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
              } while ((uVar12 & 1) != 0);
              lVar11 = *unaff_x28;
              if (lVar11 == 0) goto LAB_00e3b024;
            } while (*(int *)(lVar11 + 0x10) <= (int)uVar2);
            lVar14 = *unaff_x29;
            if (*(int *)(lVar14 + 0xe0) == 0) {
                    /* try { // try from 00e3a268 to 00f3a26f has its CatchHandler @ 00e3a31c */
              thunk_FUN_00d32864(lVar14);
              lVar11 = *unaff_x28;
              if (lVar11 == 0) goto LAB_00e3b024;
              lVar14 = *unaff_x29;
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
            uVar6 = FUN_015fa29c(lVar11,uVar2,0);
            if (lVar14 == 0) goto LAB_00e3b024;
            _fStack00000000000001e0 = CONCAT62(stack0x000001e2,uVar6);
            uVar12 = FUN_01322618(lVar14,&stack0x000001e0,*(undefined8 *)StringLiteral_12745);
          } while ((uVar12 & 1) != 0);
          if ((int)(uVar2 | uVar19) < 0) {
LAB_00e3a2c0:
            uVar20 = uVar21;
            if (-1 < (int)uVar19) {
              uVar20 = uVar19;
            }
          }
          else {
            uVar20 = uVar19;
            if ((int)uVar2 <= (int)uVar19) {
              uVar20 = uVar2;
            }
          }
                    /* try { // try from 00e3a2c8 to 00f3a2cf has its CatchHandler @ 00e3a318 */
          lVar11 = *(long *)(unaff_x19 + 0x78);
                    /* try { // try from 00e3a2d0 to 00f3a333 has its CatchHandler @ 00e3a150 */
          if (*(char *)(unaff_x19 + 0x143) == '\0') {
            if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) ==
                0) {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_01731954(0);
                    /* catch() { ... } // from try @ 00e3a3dc with catch @ 00e3a4ec */
                    /* catch() { ... } // from try @ 00e3a4a0 with catch @ 00e3a4f0 */
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 00e3a448 with catch @ 00e3a4f4 */
                    /* catch() { ... } // from try @ 00e3a408 with catch @ 00e3a4f8 */
              thunk_FUN_00d32864(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo);
            }
            uVar10 = FUN_016f8fb8(&stack0x00000214,uVar10,0);
                    /* try { // try from 00e3a50c to 00f3a52f has its CatchHandler @ 00e3a50c
                       catch() { ... } // from try @ 00e3a50c with catch @ 00e3a50c
                       catch() { ... } // from try @ 00e3a540 with catch @ 00e3a50c */
            if (lVar11 == 0) goto LAB_00e3b024;
            uVar10 = FUN_01600e54(lVar11,uVar20,uVar10,0);
            lVar11 = *(long *)(unaff_x19 + 0x48);
            *(undefined8 *)(unaff_x19 + 0x78) = uVar10;
            if (lVar11 == 0) goto LAB_00e3b024;
                    /* try { // try from 00e3a530 to 00f3a53f has its CatchHandler @ 00e3a550 */
                    /* try { // try from 00e3a540 to 00f3a563 has its CatchHandler @ 00e3a50c */
            FUN_0132138c(lVar11,uVar20,&stack0x000001e0,*unaff_x27);
            uVar5 = _fStack00000000000001e0;
            uVar30 = in_stack_00000010[3];
            uVar29 = in_stack_00000010[2];
            uVar28 = in_stack_00000010[5];
            uVar27 = in_stack_00000010[4];
                    /* catch() { ... } // from try @ 00e3a530 with catch @ 00e3a550 */
            uVar12 = in_stack_00000010[6];
            in_stack_000001e8 = in_stack_00000010[1];
            _fStack00000000000001e0 = *in_stack_00000010;
            lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                         DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                       );
            if (lVar14 == 0) goto LAB_00e3b024;
            in_stack_00000028 = in_stack_000001e8;
            in_stack_00000020 = _fStack00000000000001e0;
            in_stack_00000030 = uVar29;
            in_stack_00000038 = uVar30;
            in_stack_00000040 = uVar27;
            in_stack_00000048 = uVar28;
            in_stack_00000050 = (int)uVar12;
            FUN_00e5f6e0(lVar14,uVar5,&stack0x00000020,0);
            FUN_01323a14(lVar11,uVar20,lVar14,
                         *(undefined8 *)
                          Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                        );
            *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
            if ((*(long *)(unaff_x19 + 0x48) == 0) ||
               (FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar20,&stack0x00000160,*unaff_x27),
               in_stack_00000160 == 0)) goto LAB_00e3b024;
            FUN_00e5eb18(in_stack_00000160,*(undefined1 *)(unaff_x19 + 0x37d),0);
          }
          else {
            if (lVar11 == 0) goto LAB_00e3b024;
            uVar10 = FUN_01600e54(lVar11,uVar20,
                                  *(undefined8 *)
                                   UnityEngine_ProBuilder_EdgeLookup_<>c__DisplayClass16_0_TypeInfo,
                                  0);
            lVar11 = *(long *)(unaff_x19 + 0x48);
            *(undefined8 *)(unaff_x19 + 0x78) = uVar10;
            if (lVar11 == 0) goto LAB_00e3b024;
                    /* catch() { ... } // from try @ 00e3a1f8 with catch @ 00e3a314 */
                    /* catch() { ... } // from try @ 00e3a2c8 with catch @ 00e3a318 */
            FUN_0132138c(lVar11,uVar20,&stack0x000001e0,*unaff_x27);
            uVar5 = _fStack00000000000001e0;
            uVar30 = in_stack_00000010[3];
            uVar29 = in_stack_00000010[2];
                    /* catch() { ... } // from try @ 00e3a268 with catch @ 00e3a31c */
                    /* catch() { ... } // from try @ 00e3a228 with catch @ 00e3a320 */
            uVar28 = in_stack_00000010[5];
            uVar27 = in_stack_00000010[4];
            uVar12 = in_stack_00000010[6];
            in_stack_000001e8 = in_stack_00000010[1];
            _fStack00000000000001e0 = *in_stack_00000010;
                    /* try { // try from 00e3a334 to 00f3a3db has its CatchHandler @ 00e3a334
                       catch() { ... } // from try @ 00e3a334 with catch @ 00e3a334
                       catch() { ... } // from try @ 00e3a4a8 with catch @ 00e3a334 */
            lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                         DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                       );
            if (lVar14 == 0) goto LAB_00e3b024;
            in_stack_000000a8 = in_stack_000001e8;
            in_stack_000000a0 = _fStack00000000000001e0;
            in_stack_000000b0 = uVar29;
            in_stack_000000b8 = uVar30;
            in_stack_000000c0 = uVar27;
            in_stack_000000c8 = uVar28;
            in_stack_000000d0 = (int)uVar12;
            FUN_00e5f6e0(lVar14,uVar5,&stack0x000000a0,0);
            FUN_01323a14(lVar11,uVar20,lVar14,
                         *(undefined8 *)
                          Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                        );
            *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
            if ((*(long *)(unaff_x19 + 0x48) == 0) ||
               (FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar20,&stack0x00000160,*unaff_x27),
               in_stack_00000160 == 0)) goto LAB_00e3b024;
            FUN_00e5eb18(in_stack_00000160,*(undefined1 *)(unaff_x19 + 0x37d),0);
            lVar11 = *(long *)(unaff_x19 + 0x48);
            if (lVar11 == 0) goto LAB_00e3b024;
                    /* try { // try from 00e3a3dc to 00f3a3ef has its CatchHandler @ 00e3a4ec */
            FUN_0132138c(lVar11,uVar20,&stack0x00000160,*unaff_x27);
            lVar14 = in_stack_00000160;
            in_stack_00000178 = in_stack_00000018[3];
            in_stack_00000170 = in_stack_00000018[2];
            in_stack_00000188 = in_stack_00000018[5];
            in_stack_00000180 = in_stack_00000018[4];
            in_stack_00000190 = (undefined4)in_stack_00000018[6];
            in_stack_00000168 = in_stack_00000018[1];
            in_stack_00000160 = *in_stack_00000018;
                    /* try { // try from 00e3a408 to 00f3a40f has its CatchHandler @ 00e3a4f8 */
            lVar23 = thunk_FUN_00d62348(*(undefined8 *)
                                         DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                       );
            if (lVar23 == 0) goto LAB_00e3b024;
            in_stack_00000068 = in_stack_00000168;
            in_stack_00000060 = in_stack_00000160;
            in_stack_00000078 = in_stack_00000178;
            in_stack_00000070 = in_stack_00000170;
            in_stack_00000088 = in_stack_00000188;
            in_stack_00000080 = in_stack_00000180;
            in_stack_00000090 = in_stack_00000190;
            FUN_00e5f6e0(lVar23,lVar14,&stack0x00000060,0);
                    /* try { // try from 00e3a448 to 00f3a44f has its CatchHandler @ 00e3a4f4 */
            FUN_01323a14(lVar11,uVar20,lVar23,
                         *(undefined8 *)
                          Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                        );
            *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
            if ((*(long *)(unaff_x19 + 0x48) == 0) ||
               (FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar20,&stack0x00000218,*unaff_x27),
               in_stack_00000218 == 0)) goto LAB_00e3b024;
            FUN_00e5eb18(in_stack_00000218,*(undefined1 *)(unaff_x19 + 0x37d),0);
            uVar20 = uVar20 + 1;
                    /* try { // try from 00e3a4a0 to 00f3a4a7 has its CatchHandler @ 00e3a4f0 */
          }
        }
        goto LAB_00e3a5f8;
      }
      if (*unaff_x28 == 0) goto LAB_00e3b024;
      sVar7 = FUN_015fa29c(*unaff_x28,unaff_w24,0);
      if (sVar7 != 0x20) {
        if (*unaff_x28 == 0) goto LAB_00e3b024;
        sVar7 = FUN_015fa29c(*unaff_x28,unaff_w24,0);
        if (sVar7 == 0x3000) goto LAB_00e39f90;
        if (*unaff_x28 == 0) goto LAB_00e3b024;
        sVar7 = FUN_015fa29c(*unaff_x28,unaff_w24,0);
        if (sVar7 == 0x200b) goto LAB_00e39f90;
        if (*(char *)(unaff_x19 + 0x143) != '\0') {
          if (*unaff_x28 == 0) goto LAB_00e3b024;
          sVar7 = FUN_015fa29c(*unaff_x28,unaff_w24,0);
          if (sVar7 != 0x2d) {
            if (*unaff_x28 == 0) goto LAB_00e3b024;
            iVar17 = unaff_w24 + 1;
            uVar10 = FUN_01600e54(*unaff_x28,iVar17,*(undefined8 *)PTR_DAT_033f0398,0);
            lVar11 = *(long *)(unaff_x19 + 0x48);
            *(undefined8 *)(unaff_x19 + 0x78) = uVar10;
            if (lVar11 == 0) goto LAB_00e3b024;
            FUN_0132138c(lVar11,unaff_w24,&stack0x000001e0,*unaff_x27);
            uVar5 = _fStack00000000000001e0;
            uVar30 = in_stack_00000010[3];
            uVar29 = in_stack_00000010[2];
            uVar28 = in_stack_00000010[5];
            uVar27 = in_stack_00000010[4];
            uVar12 = in_stack_00000010[6];
            in_stack_000001e8 = in_stack_00000010[1];
            _fStack00000000000001e0 = *in_stack_00000010;
            lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                         DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                       );
            if (lVar14 == 0) goto LAB_00e3b024;
            in_stack_000001a8 = in_stack_000001e8;
            in_stack_000001a0 = _fStack00000000000001e0;
            in_stack_000001b0 = uVar29;
            in_stack_000001b8 = uVar30;
            in_stack_000001c0 = uVar27;
            in_stack_000001c8 = uVar28;
            in_stack_000001d0 = (int)uVar12;
            FUN_00e5f6e0(lVar14,uVar5,&stack0x000001a0,0);
            FUN_01323a14(lVar11,iVar17,lVar14,
                         *(undefined8 *)
                          Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                        );
            *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
            if ((*(long *)(unaff_x19 + 0x48) == 0) ||
               (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar17,&stack0x00000160,*unaff_x27),
               in_stack_00000160 == 0)) goto LAB_00e3b024;
            FUN_00e5eb18(in_stack_00000160,*(undefined1 *)(unaff_x19 + 0x37d),0);
            lVar11 = *(long *)(unaff_x19 + 0x48);
            if (lVar11 == 0) goto LAB_00e3b024;
            FUN_0132138c(lVar11,unaff_w24,&stack0x00000160,*unaff_x27);
            lVar14 = in_stack_00000160;
            in_stack_00000178 = in_stack_00000018[3];
            in_stack_00000170 = in_stack_00000018[2];
            in_stack_00000188 = in_stack_00000018[5];
            in_stack_00000180 = in_stack_00000018[4];
            in_stack_00000190 = (undefined4)in_stack_00000018[6];
            in_stack_00000168 = in_stack_00000018[1];
            in_stack_00000160 = *in_stack_00000018;
            lVar23 = thunk_FUN_00d62348(*(undefined8 *)
                                         DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                       );
            if (lVar23 == 0) goto LAB_00e3b024;
            in_stack_00000128 = in_stack_00000168;
            in_stack_00000120 = in_stack_00000160;
            in_stack_00000138 = in_stack_00000178;
            in_stack_00000130 = in_stack_00000170;
            in_stack_00000148 = in_stack_00000188;
            in_stack_00000140 = in_stack_00000180;
            in_stack_00000150 = in_stack_00000190;
            FUN_00e5f6e0(lVar23,lVar14,&stack0x00000120,0);
            FUN_01323a14(lVar11,iVar17,lVar23,
                         *(undefined8 *)
                          Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                        );
            *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
            if ((*(long *)(unaff_x19 + 0x48) == 0) ||
               (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar17,&stack0x00000218,*unaff_x27),
               in_stack_00000218 == 0)) goto LAB_00e3b024;
            FUN_00e5eb18(in_stack_00000218,*(undefined1 *)(unaff_x19 + 0x37d),0);
            uVar20 = unaff_w24 + 2;
            uVar21 = uVar20;
            goto LAB_00e3a5f8;
          }
        }
        lVar11 = *unaff_x28;
        if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_01731954(0);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo);
        }
        uVar10 = FUN_016f8fb8(&stack0x00000214,uVar10,0);
        if (lVar11 == 0) goto LAB_00e3b024;
        uVar20 = unaff_w24 + 1;
        uVar10 = FUN_01600e54(lVar11,uVar20,uVar10,0);
        lVar11 = *(long *)(unaff_x19 + 0x48);
        *(undefined8 *)(unaff_x19 + 0x78) = uVar10;
        if (lVar11 == 0) goto LAB_00e3b024;
        FUN_0132138c(lVar11,unaff_w24,&stack0x000001e0,*unaff_x27);
        uVar5 = _fStack00000000000001e0;
        uVar30 = in_stack_00000010[3];
        uVar29 = in_stack_00000010[2];
        uVar28 = in_stack_00000010[5];
        uVar27 = in_stack_00000010[4];
        uVar12 = in_stack_00000010[6];
        in_stack_000001e8 = in_stack_00000010[1];
        _fStack00000000000001e0 = *in_stack_00000010;
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                     DigitalOpus_MB_Core_MB3_TextureCombinerPackerRoot_<ConvertTexturesToReadableFormats>d__5_TypeInfo
                                   );
        if (lVar14 == 0) goto LAB_00e3b024;
        in_stack_000000e8 = in_stack_000001e8;
        in_stack_000000e0 = _fStack00000000000001e0;
        in_stack_000000f0 = uVar29;
        in_stack_000000f8 = uVar30;
        in_stack_00000100 = uVar27;
        in_stack_00000108 = uVar28;
        in_stack_00000110 = (int)uVar12;
        FUN_00e5f6e0(lVar14,uVar5,&stack0x000000e0,0);
        FUN_01323a14(lVar11,uVar20,lVar14,
                     *(undefined8 *)
                      Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_<>c__DisplayClass53_0_<LineCast>b__0__
                    );
        *(int *)(unaff_x19 + 0x4f8) = *(int *)(unaff_x19 + 0x4f8) + 1;
        if ((*(long *)(unaff_x19 + 0x48) == 0) ||
           (FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar20,&stack0x00000160,*unaff_x27),
           in_stack_00000160 == 0)) goto LAB_00e3b024;
        FUN_00e5eb18(in_stack_00000160,*(undefined1 *)(unaff_x19 + 0x37d),0);
        uVar21 = uVar20;
        goto LAB_00e3a5f8;
      }
LAB_00e39f90:
      if (*unaff_x28 == 0) goto LAB_00e3b024;
      unaff_x22 = FUN_01601ad8(*unaff_x28,unaff_w24,1,0);
      *unaff_x28 = unaff_x22;
      uVar20 = unaff_w24;
    } while (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) != 0)
    ;
  } while( true );
  while( true ) {
    FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar18,&stack0x000001e0,*unaff_x27);
    *(ulong *)(unaff_x19 + 0x500) = _fStack00000000000001e0;
    if (_fStack00000000000001e0 == 0) goto LAB_00e3b024;
    uVar10 = *(undefined8 *)(_fStack00000000000001e0 + 0xf8);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_02681b9c(uVar10,0,0);
    puVar15 = (undefined8 *)(unaff_x19 + 0x80);
    if ((uVar12 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x500) == 0) ||
         (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x500) + 0xf8), lVar11 == 0)) goto LAB_00e3b024;
      puVar15 = (undefined8 *)(lVar11 + 0x18);
    }
    uVar10 = *puVar15;
    *(undefined8 *)(unaff_x19 + 0x450) = uVar10;
    iVar9 = FUN_00e4b938(uVar12,uVar10,*(undefined8 *)(unaff_x19 + 0x500));
    lVar11 = *(long *)(unaff_x19 + 0x500);
    if (lVar11 == 0) goto LAB_00e3b024;
    *(undefined8 *)(lVar11 + 0x44) = *(undefined8 *)(unaff_x19 + 0x440);
    *(undefined4 *)(lVar11 + 0x4c) = *(undefined4 *)(unaff_x19 + 0x448);
    if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
    sVar7 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),iVar18,0);
    if (sVar7 == 10) {
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
      iVar9 = 0;
      if (iVar18 != 0) {
        iVar9 = iVar18 + -1;
      }
      FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar9,*(undefined8 *)puVar4);
      if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
      lVar11 = *(long *)(unaff_x19 + 0x58);
      *(undefined4 *)(unaff_x19 + 0x440) = *(undefined4 *)(*(long *)(unaff_x19 + 0x500) + 0x74);
      if (lVar11 == 0) goto LAB_00e3b024;
      if (iVar8 < *(int *)(lVar11 + 0x18)) {
        fVar31 = *(float *)(unaff_x19 + 0x444);
        iVar8 = iVar8 + 1;
        FUN_0132138c(lVar11,iVar8,&stack0x000001e0,*(undefined8 *)puVar3);
        *(float *)(unaff_x19 + 0x444) = fVar31 - fStack00000000000001e0;
      }
      else {
        iVar8 = iVar8 + 1;
      }
    }
    else {
      if (*unaff_x28 == 0) goto LAB_00e3b024;
      sVar7 = FUN_015fa29c(*unaff_x28,iVar18,0);
      if (sVar7 == 0xd) {
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
        iVar9 = 0;
        if (iVar18 != 0) {
          iVar9 = iVar18 + -1;
        }
        FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar9,*(undefined8 *)puVar4);
        if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
        *(undefined4 *)(unaff_x19 + 0x440) = *(undefined4 *)(*(long *)(unaff_x19 + 0x500) + 0x74);
      }
      else if (iVar18 - iVar17 == -1) {
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
        FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar17 + -1,*(undefined8 *)puVar4);
      }
      else {
        if (*unaff_x28 == 0) goto LAB_00e3b024;
        fVar31 = (float)iVar9;
        sVar7 = FUN_015fa29c(*unaff_x28,iVar18,0);
        fVar32 = *(float *)(unaff_x19 + 0x440);
        lVar11 = *(long *)(unaff_x19 + 0x500);
        if (sVar7 == 9) {
          if (lVar11 == 0) goto LAB_00e3b024;
          fVar31 = fVar31 * unaff_s9 * *(float *)(unaff_x19 + 0x138) *
                   (*(float *)(lVar11 + 0x80) / fVar31);
        }
        else {
          if (lVar11 == 0) goto LAB_00e3b024;
          fVar31 = (float)FUN_00e57fd0(*(undefined4 *)(unaff_x19 + 0x134),fVar31,lVar11,0);
        }
        *(float *)(unaff_x19 + 0x440) = fVar32 + fVar31;
      }
    }
    iVar18 = iVar18 + 1;
    if (iVar18 == iVar17) break;
LAB_00e3ace0:
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e3b024;
  }
LAB_00e3aef4:
  uVar10 = FUN_010d96e0(*(undefined8 *)(unaff_x19 + 0x50),*(undefined8 *)PTR_DAT_033eb5c8);
  uVar10 = FUN_010dfe04(uVar10,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                       );
  *(undefined8 *)(unaff_x19 + 0x50) = uVar10;
  FUN_00e4c7d0();
  fVar31 = DAT_028aa030;
  if ((*(int *)(unaff_x19 + 0x150) != 5) ||
     (-*(float *)(unaff_x19 + 400) <= *(float *)(unaff_x19 + 0x42c))) {
LAB_00e3b030:
    FUN_00e4d29c();
    FUN_00e4d598();
    FUN_00e4d720();
    FUN_00e4da30();
    FUN_00e4de60();
    return;
  }
  lVar11 = *unaff_x28;
  if (lVar11 != 0) {
    iVar17 = 0;
    while( true ) {
      if (*(int *)(lVar11 + 0x10) <= iVar17) {
        FUN_00e38100();
        goto LAB_00e3b030;
      }
      if ((*(long *)(unaff_x19 + 0x48) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar17,&stack0x000001e0,*unaff_x27),
         _fStack00000000000001e0 == 0)) break;
      *(float *)(_fStack00000000000001e0 + 0x84) =
           *(float *)(_fStack00000000000001e0 + 0x84) *
           (*(float *)(unaff_x19 + 0x42c) / *(float *)(unaff_x19 + 400)) * fVar31;
      if ((*(long *)(unaff_x19 + 0x48) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar17,&stack0x000001e0,*unaff_x27),
         _fStack00000000000001e0 == 0)) break;
      *(float *)(_fStack00000000000001e0 + 0x48) =
           *(float *)(_fStack00000000000001e0 + 0x48) *
           (*(float *)(unaff_x19 + 0x42c) / *(float *)(unaff_x19 + 400)) * fVar31;
      if ((*(long *)(unaff_x19 + 0x48) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar17,&stack0x000001e0,*unaff_x27),
         _fStack00000000000001e0 == 0)) break;
      iVar17 = iVar17 + 1;
      *(float *)(_fStack00000000000001e0 + 0x54) =
           *(float *)(_fStack00000000000001e0 + 0x54) *
           (*(float *)(unaff_x19 + 0x42c) / *(float *)(unaff_x19 + 400)) * fVar31;
      lVar11 = *(long *)(unaff_x19 + 0x78);
      if (lVar11 == 0) break;
    }
  }
LAB_00e3b024:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


