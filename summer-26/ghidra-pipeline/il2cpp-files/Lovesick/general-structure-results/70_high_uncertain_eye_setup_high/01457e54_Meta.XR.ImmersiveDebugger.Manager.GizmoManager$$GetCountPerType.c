/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager$$GetCountPerType
ENTRY_POINT: 01457e54
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager__GetCountPerType
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint in_w10;
  int in_w11;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  int unaff_w24;
  int unaff_w26;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x28;
  uint unaff_w29;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined8 in_stack_00000000;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  int iStack0000000000000020;
  byte bStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  while( true ) {
    iVar8 = 0;
    unaff_w26 = unaff_w26 + in_w10;
    iStack0000000000000020 = in_w11;
    while( true ) {
      lVar4 = *(long *)(param_1 + 0x10);
      uVar5 = 0;
      if (lVar4 == 0) goto LAB_0145804c;
      if (*(int *)(lVar4 + 0x18) <= iVar8) break;
      uVar5 = FUN_0132138c(lVar4,iVar8,&stack0x00000028,*unaff_x19);
      if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) goto LAB_0145804c;
      uVar5 = 0;
      if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
      lVar4 = *(long *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
      uVar5 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                           *unaff_x21);
      if ((CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) || (lVar4 == 0))
      goto LAB_0145804c;
      uVar5 = FUN_0267e21c(lVar4,*(undefined8 *)
                                  (CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10),0
                          );
      param_1 = *(long *)(unaff_x23 + 0x18);
      unaff_w29 = (uint)uVar5 ^ 1;
      iVar8 = iVar8 + 1;
      if (param_1 == 0) goto LAB_0145804c;
    }
    lVar4 = *(long *)(unaff_x20 + 0x58);
    unaff_w24 = unaff_w24 + 1;
    if (lVar4 == 0) break;
    while (iVar8 = *(int *)(lVar4 + 0x18), iVar8 <= unaff_w24) {
      uVar5 = in_stack_00000008;
      if (in_stack_00000008 == 0) goto LAB_0145804c;
      if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x22) goto LAB_0145807c;
      lVar4 = in_stack_00000008 + unaff_x22 * 4;
      *(bool *)(lVar4 + 0x20) = iStack0000000000000020 == 0;
      *(bool *)(lVar4 + 0x21) = unaff_w26 == iVar8;
      *(bool *)(lVar4 + 0x22) = in_stack_00000010._4_4_ == iVar8;
      *(byte *)(lVar4 + 0x23) = *(byte *)(lVar4 + 0x23) | (byte)unaff_w29 & 1;
      if (4 < in_stack_00000000._4_4_) {
        uVar5 = 0;
        if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
        uVar5 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                             *unaff_x21);
        if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) goto LAB_0145804c;
        uVar10 = *(undefined8 *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
        cVar1 = *(char *)(unaff_x20 + 0x49);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        bStack0000000000000024 =
             FUN_01457470(unaff_x22 & 0xffffffff,cVar1 != '\0',in_stack_00000008);
        bStack0000000000000024 = bStack0000000000000024 & 1;
        uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,(long)&stack0x00000020 + 4);
        if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x22) goto LAB_0145807c;
        uStack0000000000000028 = *(undefined4 *)(lVar4 + 0x20);
        uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033eb5f8,&stack0x00000028);
        uVar10 = FUN_01600ba0(*(undefined8 *)
                               System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo,uVar10
                              ,uVar6,uVar7,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar10,0);
      }
      unaff_x22 = unaff_x22 + 1;
      uVar5 = in_stack_00000008;
      if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
      if ((long)*(int *)(*(long *)(unaff_x20 + 0x70) + 0x18) <= (long)unaff_x22) {
        return;
      }
      uVar5 = 0;
      if (*(long *)(unaff_x20 + 0x58) == 0) goto LAB_0145804c;
      uVar5 = FUN_0132138c(*(long *)(unaff_x20 + 0x58),0,&stack0x00000028,
                           *(undefined8 *)PTR_DAT_033ee2d8);
      if ((CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) ||
         (lVar4 = *(long *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10),
         lVar4 == 0)) goto LAB_0145804c;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x22) goto LAB_0145807c;
      unaff_x28 = *(long *)(lVar4 + unaff_x22 * 8 + 0x20);
      if (*(char *)(unaff_x20 + 0x49) == '\0') {
        unaff_s8 = 0.0;
        unaff_s10 = 0.0;
        unaff_s11 = 0.0;
        unaff_s9 = unaff_s13;
      }
      else {
        uVar5 = 0;
        if (*(long *)(unaff_x20 + 0x58) == 0) goto LAB_0145804c;
        lVar4 = *(long *)(unaff_x20 + 0x50);
        uVar5 = FUN_0132138c(*(long *)(unaff_x20 + 0x58),0,&stack0x00000028,
                             *(undefined8 *)PTR_DAT_033ee2d8);
        if ((CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) ||
           (lVar9 = *(long *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x18),
           lVar9 == 0)) goto LAB_0145804c;
        lVar9 = *(long *)(lVar9 + 0x10);
        uVar5 = 0;
        if (lVar9 == 0) goto LAB_0145804c;
        uVar5 = FUN_0132138c(lVar9,0,&stack0x00000028,*unaff_x19);
        if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) goto LAB_0145804c;
        uVar5 = 0;
        if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
        uVar10 = *(undefined8 *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
        uVar5 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                             *unaff_x21);
        if (lVar4 == 0) goto LAB_0145804c;
        unaff_s11 = (float)FUN_0144a380(lVar4,uVar10,
                                        CONCAT44(uStack000000000000002c,uStack0000000000000028),0);
        unaff_s10 = param_3;
        unaff_s8 = param_4;
        unaff_s9 = param_5;
      }
      lVar4 = *(long *)(unaff_x20 + 0x58);
      uVar5 = 0;
      if (lVar4 == 0) goto LAB_0145804c;
      iStack0000000000000020 = 0;
      unaff_w26 = 0;
      in_stack_00000010._4_4_ = 0;
      unaff_w29 = 1;
      unaff_w24 = 0;
    }
    uVar5 = FUN_0132138c(lVar4,unaff_w24,&stack0x00000028,*(undefined8 *)PTR_DAT_033ee2d8);
    unaff_x23 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    if ((unaff_x23 == 0) || (lVar4 = *(long *)(unaff_x23 + 0x10), lVar4 == 0)) goto LAB_0145804c;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x22) {
LAB_0145807c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar4 = *(long *)(lVar4 + unaff_x22 * 8 + 0x20);
    uVar5 = 0;
    if (lVar4 == 0) goto LAB_0145804c;
    uVar2 = FUN_014440c0(lVar4,0);
    lVar4 = *(long *)(unaff_x23 + 0x10);
    uVar5 = uVar2;
    if (lVar4 == 0) goto LAB_0145804c;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x22) goto LAB_0145807c;
    if (unaff_x28 == 0) goto LAB_0145804c;
    uVar3 = FUN_014442d4(unaff_x28,*(undefined8 *)(lVar4 + unaff_x22 * 8 + 0x20),0);
    if (*(char *)(unaff_x20 + 0x49) != '\0') {
      uVar5 = uVar3;
      if (*(long *)(unaff_x23 + 0x18) == 0) goto LAB_0145804c;
      lVar4 = *(long *)(*(long *)(unaff_x23 + 0x18) + 0x10);
      uVar5 = 0;
      if (lVar4 == 0) goto LAB_0145804c;
      lVar9 = *(long *)(unaff_x20 + 0x50);
      uVar5 = FUN_0132138c(lVar4,0,&stack0x00000028,*unaff_x19);
      if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) goto LAB_0145804c;
      uVar5 = 0;
      if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
      uVar10 = *(undefined8 *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
      uVar5 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                           *unaff_x21);
      if (lVar9 == 0) goto LAB_0145804c;
      fVar11 = (float)FUN_0144a380(lVar9,uVar10,
                                   CONCAT44(uStack000000000000002c,uStack0000000000000028),0);
      fVar12 = param_3 - unaff_s10;
      param_5 = param_5 - unaff_s9;
      param_4 = (param_4 - unaff_s8) * (param_4 - unaff_s8);
      param_3 = param_5 * param_5;
      if (param_3 + param_4 + (fVar11 - unaff_s11) * (fVar11 - unaff_s11) + fVar12 * fVar12 <
          unaff_s12) {
        in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + 1;
      }
      uVar3 = uVar3 & 0xffffffff;
    }
    param_1 = *(long *)(unaff_x23 + 0x18);
    uVar5 = uVar3;
    if (param_1 == 0) goto LAB_0145804c;
    in_w10 = (uint)uVar3 & 1;
    in_w11 = iStack0000000000000020 + (~(uint)uVar2 & 1);
  }
  uVar5 = 0;
LAB_0145804c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c(uVar5);
}


