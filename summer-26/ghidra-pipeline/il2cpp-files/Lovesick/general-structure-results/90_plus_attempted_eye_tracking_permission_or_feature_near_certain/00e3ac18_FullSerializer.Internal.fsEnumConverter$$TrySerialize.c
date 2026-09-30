/*
FUNCTION_NAME: FullSerializer.Internal.fsEnumConverter$$TrySerialize
ENTRY_POINT: 00e3ac18
PROGRAM: Lovesick-libil2cpp.so
SCORE: 123
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_data_collection_or_telemetry_hits_1
*/


void FullSerializer_Internal_fsEnumConverter__TrySerialize(void)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int in_w8;
  undefined8 *puVar8;
  long unaff_x19;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined4 uVar12;
  float fVar13;
  float unaff_s9;
  float fVar14;
  float fStack00000000000001e0;
  undefined4 uStack00000000000001e4;
  
  if (in_w8 != 0) {
    uVar5 = FUN_00e47070();
    *(undefined8 *)(unaff_x19 + 0x78) = uVar5;
  }
  FUN_00e4c428();
  puVar2 = StringLiteral_4747;
  puVar1 = OVREyeGaze_TypeInfo;
                    /* try { // try from 00e3ac48 to 00f3ac67 has its CatchHandler @ 00e3ad08 */
  if (*(int *)(unaff_x19 + 0x4f8) < 1) {
    uVar12 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e3b024;
    FUN_0132138c(*(long *)(unaff_x19 + 0x48),0,&stack0x000001e0,*unaff_x27);
    if (CONCAT44(uStack00000000000001e4,fStack00000000000001e0) == 0) goto LAB_00e3b024;
    uVar12 = *(undefined4 *)(CONCAT44(uStack00000000000001e4,fStack00000000000001e0) + 0x74);
  }
                    /* try { // try from 00e3ac80 to 00f3ac93 has its CatchHandler @ 00e3ad1c */
  lVar6 = *(long *)(unaff_x19 + 0x58);
  *(undefined4 *)(unaff_x19 + 0x440) = uVar12;
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) < 1) {
      fVar13 = *(float *)(unaff_x19 + 0x104);
    }
    else {
                    /* try { // try from 00e3ac9c to 00f3acaf has its CatchHandler @ 00e3ad00 */
      FUN_0132138c(lVar6,0,&stack0x000001e0,*(undefined8 *)puVar1);
      fVar13 = fStack00000000000001e0;
    }
                    /* try { // try from 00e3acb8 to 00f3acc7 has its CatchHandler @ 00e3acfc */
    *(float *)(unaff_x19 + 0x444) = -fVar13;
    if (*(long *)(unaff_x19 + 0x78) != 0) {
      iVar9 = *(int *)(*(long *)(unaff_x19 + 0x78) + 0x10);
                    /* try { // try from 00e3acc8 to 00f3ad33 has its CatchHandler @ 00e3a8b4 */
      if (0 < iVar9) {
        iVar10 = 0;
        iVar11 = 0;
        do {
          if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_00e3b024;
          FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar11,&stack0x000001e0,*unaff_x27);
                    /* catch() { ... } // from try @ 00e3a9b0 with catch @ 00e3acf8 */
          lVar6 = CONCAT44(uStack00000000000001e4,fStack00000000000001e0);
                    /* catch() { ... } // from try @ 00e3acb8 with catch @ 00e3acfc */
          *(long *)(unaff_x19 + 0x500) = lVar6;
                    /* catch() { ... } // from try @ 00e3ac9c with catch @ 00e3ad00 */
          if (lVar6 == 0) goto LAB_00e3b024;
                    /* catch() { ... } // from try @ 00e3aa0c with catch @ 00e3ad04 */
                    /* catch() { ... } // from try @ 00e3ac48 with catch @ 00e3ad08 */
                    /* catch() { ... } // from try @ 00e3a9c4 with catch @ 00e3ad0c */
          uVar5 = *(undefined8 *)(lVar6 + 0xf8);
                    /* catch() { ... } // from try @ 00e3a984 with catch @ 00e3ad10 */
                    /* catch() { ... } // from try @ 00e3ab9c with catch @ 00e3ad14 */
                    /* catch() { ... } // from try @ 00e3a9f8 with catch @ 00e3ad18
                       catch() { ... } // from try @ 00e3aa68 with catch @ 00e3ad18 */
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
                    /* catch() { ... } // from try @ 00e3ab14 with catch @ 00e3ad1c
                       catch() { ... } // from try @ 00e3abe0 with catch @ 00e3ad1c
                       catch() { ... } // from try @ 00e3ac80 with catch @ 00e3ad1c */
            thunk_FUN_00d32864();
          }
                    /* catch() { ... } // from try @ 00e3a964 with catch @ 00e3ad20 */
          uVar7 = FUN_02681b9c(uVar5,0,0);
                    /* try { // try from 00e3ad34 to 00f3ad67 has its CatchHandler @ 00e3ad34
                       catch(type#1 @ 00000000) { ... } // from try @ 00e3ad34 with catch @ 00e3ad34
                       catch(type#1 @ 00000000) { ... } // from try @ 00e3adb8 with catch @ 00e3ad34
                        */
          puVar8 = (undefined8 *)(unaff_x19 + 0x80);
          if ((uVar7 & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0x500) == 0) ||
               (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x500) + 0xf8), lVar6 == 0))
            goto LAB_00e3b024;
            puVar8 = (undefined8 *)(lVar6 + 0x18);
          }
          uVar5 = *puVar8;
          *(undefined8 *)(unaff_x19 + 0x450) = uVar5;
          iVar4 = FUN_00e4b938(uVar7,uVar5,*(undefined8 *)(unaff_x19 + 0x500));
          lVar6 = *(long *)(unaff_x19 + 0x500);
          if (lVar6 == 0) goto LAB_00e3b024;
                    /* try { // try from 00e3ad68 to 00f3ad83 has its CatchHandler @ 00e3adac */
          *(undefined8 *)(lVar6 + 0x44) = *(undefined8 *)(unaff_x19 + 0x440);
          *(undefined4 *)(lVar6 + 0x4c) = *(undefined4 *)(unaff_x19 + 0x448);
          if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_00e3b024;
                    /* try { // try from 00e3ad88 to 00f3ad8f has its CatchHandler @ 00e3ada8 */
          sVar3 = FUN_015fa29c(*(long *)(unaff_x19 + 0x78),iVar11,0);
          if (sVar3 == 10) {
            if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3ad88 with catch @ 00e3ada8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3ad68 with catch @ 00e3adac
                        */
            iVar4 = 0;
            if (iVar11 != 0) {
              iVar4 = iVar11 + -1;
            }
                    /* try { // try from 00e3adb0 to 00f3adb7 has its CatchHandler @ 00e3adc0 */
            FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar4,*(undefined8 *)puVar2);
                    /* try { // try from 00e3adb8 to 00f3adc3 has its CatchHandler @ 00e3ad34 */
            if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3adb0 with catch @ 00e3adc0
                        */
            lVar6 = *(long *)(unaff_x19 + 0x58);
                    /* try { // try from 00e3adc4 to 00f3addb has its CatchHandler @ 00e3adc4
                       catch(type#1 @ 00000000) { ... } // from try @ 00e3adc4 with catch @ 00e3adc4
                       catch(type#1 @ 00000000) { ... } // from try @ 00e3ae08 with catch @ 00e3adc4
                        */
            *(undefined4 *)(unaff_x19 + 0x440) =
                 *(undefined4 *)(*(long *)(unaff_x19 + 0x500) + 0x74);
            if (lVar6 == 0) goto LAB_00e3b024;
            if (iVar10 < *(int *)(lVar6 + 0x18)) {
                    /* try { // try from 00e3addc to 00f3ade3 has its CatchHandler @ 00e3adfc */
              fVar13 = *(float *)(unaff_x19 + 0x444);
              iVar10 = iVar10 + 1;
                    /* try { // try from 00e3ade4 to 00f3adeb has its CatchHandler @ 00e3adf8 */
              FUN_0132138c(lVar6,iVar10,&stack0x000001e0,*(undefined8 *)puVar1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3ade4 with catch @ 00e3adf8
                        */
              *(float *)(unaff_x19 + 0x444) = fVar13 - fStack00000000000001e0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3addc with catch @ 00e3adfc
                        */
            }
            else {
              iVar10 = iVar10 + 1;
            }
          }
          else {
                    /* try { // try from 00e3ae00 to 00f3ae07 has its CatchHandler @ 00e3ae10 */
            if (*unaff_x28 == 0) goto LAB_00e3b024;
                    /* try { // try from 00e3ae08 to 00f3ae13 has its CatchHandler @ 00e3adc4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3ae00 with catch @ 00e3ae10
                        */
            sVar3 = FUN_015fa29c(*unaff_x28,iVar11,0);
                    /* try { // try from 00e3ae14 to 00f3aecf has its CatchHandler @ 00e3ae14
                       catch() { ... } // from try @ 00e3ae14 with catch @ 00e3ae14
                       catch() { ... } // from try @ 00e3aed8 with catch @ 00e3ae14 */
            if (sVar3 == 0xd) {
              if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
              iVar4 = 0;
              if (iVar11 != 0) {
                iVar4 = iVar11 + -1;
              }
              FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar4,*(undefined8 *)puVar2);
              if (*(long *)(unaff_x19 + 0x500) == 0) goto LAB_00e3b024;
              *(undefined4 *)(unaff_x19 + 0x440) =
                   *(undefined4 *)(*(long *)(unaff_x19 + 0x500) + 0x74);
            }
            else if (iVar11 - iVar9 == -1) {
              if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_00e3b024;
              FUN_00ac20f0(*(long *)(unaff_x19 + 0x50),iVar9 + -1,*(undefined8 *)puVar2);
            }
            else {
              if (*unaff_x28 == 0) goto LAB_00e3b024;
              fVar13 = (float)iVar4;
              sVar3 = FUN_015fa29c(*unaff_x28,iVar11,0);
              fVar14 = *(float *)(unaff_x19 + 0x440);
              lVar6 = *(long *)(unaff_x19 + 0x500);
              if (sVar3 == 9) {
                if (lVar6 == 0) goto LAB_00e3b024;
                fVar13 = fVar13 * unaff_s9 * *(float *)(unaff_x19 + 0x138) *
                         (*(float *)(lVar6 + 0x80) / fVar13);
              }
              else {
                if (lVar6 == 0) goto LAB_00e3b024;
                    /* try { // try from 00e3aed0 to 00f3aed7 has its CatchHandler @ 00e3af08 */
                    /* try { // try from 00e3aed8 to 00f3af1b has its CatchHandler @ 00e3ae14 */
                fVar13 = (float)FUN_00e57fd0(*(undefined4 *)(unaff_x19 + 0x134),fVar13,lVar6,0);
              }
              *(float *)(unaff_x19 + 0x440) = fVar14 + fVar13;
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 != iVar9);
      }
      uVar5 = FUN_010d96e0(*(undefined8 *)(unaff_x19 + 0x50),*(undefined8 *)PTR_DAT_033eb5c8);
                    /* catch() { ... } // from try @ 00e3aed0 with catch @ 00e3af08 */
      uVar5 = FUN_010dfe04(uVar5,*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                          );
      *(undefined8 *)(unaff_x19 + 0x50) = uVar5;
      FUN_00e4c7d0();
      fVar13 = DAT_028aa030;
                    /* catch() { ... } // from try @ 00e3b040 with catch @ 00e3af24 */
      if ((*(int *)(unaff_x19 + 0x150) != 5) ||
         (-*(float *)(unaff_x19 + 400) <= *(float *)(unaff_x19 + 0x42c))) {
LAB_00e3b030:
        FUN_00e4d29c();
                    /* try { // try from 00e3b038 to 00f3b03f has its CatchHandler @ 00e3b064 */
        FUN_00e4d598();
                    /* try { // try from 00e3b040 to 00f3b0ab has its CatchHandler @ 00e3af24 */
        FUN_00e4d720();
        FUN_00e4da30();
        FUN_00e4de60();
                    /* catch() { ... } // from try @ 00e3b038 with catch @ 00e3b064 */
                    /* catch() { ... } // from try @ 00e3b010 with catch @ 00e3b068 */
                    /* catch() { ... } // from try @ 00e3afc0 with catch @ 00e3b06c */
                    /* catch() { ... } // from try @ 00e3af98 with catch @ 00e3b070 */
                    /* catch() { ... } // from try @ 00e3af7c with catch @ 00e3b074 */
        return;
      }
      lVar6 = *unaff_x28;
      if (lVar6 != 0) {
                    /* try { // try from 00e3af50 to 00f3af5f has its CatchHandler @ 00e3b08c */
        iVar9 = 0;
        do {
          if (*(int *)(lVar6 + 0x10) <= iVar9) {
            FUN_00e38100();
            goto LAB_00e3b030;
          }
          if (*(long *)(unaff_x19 + 0x48) == 0) break;
          FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar9,&stack0x000001e0,*unaff_x27);
                    /* try { // try from 00e3af7c to 00f3af83 has its CatchHandler @ 00e3b074 */
          lVar6 = CONCAT44(uStack00000000000001e4,fStack00000000000001e0);
          if (lVar6 == 0) break;
                    /* try { // try from 00e3af98 to 00f3afa3 has its CatchHandler @ 00e3b070 */
          *(float *)(lVar6 + 0x84) =
               *(float *)(lVar6 + 0x84) *
               (*(float *)(unaff_x19 + 0x42c) / *(float *)(unaff_x19 + 400)) * fVar13;
          if (*(long *)(unaff_x19 + 0x48) == 0) break;
          FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar9,&stack0x000001e0,*unaff_x27);
          lVar6 = CONCAT44(uStack00000000000001e4,fStack00000000000001e0);
          if (lVar6 == 0) break;
                    /* try { // try from 00e3afc0 to 00f3afc7 has its CatchHandler @ 00e3b06c */
                    /* try { // try from 00e3afd8 to 00f3b00b has its CatchHandler @ 00e3b090 */
          *(float *)(lVar6 + 0x48) =
               *(float *)(lVar6 + 0x48) *
               (*(float *)(unaff_x19 + 0x42c) / *(float *)(unaff_x19 + 400)) * fVar13;
          if (*(long *)(unaff_x19 + 0x48) == 0) break;
          FUN_0132138c(*(long *)(unaff_x19 + 0x48),iVar9,&stack0x000001e0,*unaff_x27);
          lVar6 = CONCAT44(uStack00000000000001e4,fStack00000000000001e0);
          if (lVar6 == 0) break;
          iVar9 = iVar9 + 1;
                    /* try { // try from 00e3b010 to 00f3b01b has its CatchHandler @ 00e3b068 */
          *(float *)(lVar6 + 0x54) =
               *(float *)(lVar6 + 0x54) *
               (*(float *)(unaff_x19 + 0x42c) / *(float *)(unaff_x19 + 400)) * fVar13;
          lVar6 = *(long *)(unaff_x19 + 0x78);
        } while (lVar6 != 0);
      }
    }
  }
LAB_00e3b024:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


