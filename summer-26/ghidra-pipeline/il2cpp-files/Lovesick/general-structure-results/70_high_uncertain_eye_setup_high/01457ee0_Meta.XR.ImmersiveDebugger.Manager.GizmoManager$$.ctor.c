/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager$$.ctor
ENTRY_POINT: 01457ee0
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


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager___ctor
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  int unaff_w26;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x28;
  uint unaff_w29;
  float fVar12;
  float fVar13;
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
  
  while (param_5 != 0) {
    while (iVar9 = *(int *)(param_5 + 0x18), iVar9 <= unaff_w24) {
      uVar2 = in_stack_00000008;
      if (in_stack_00000008 == 0) goto LAB_0145804c;
      if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x22) goto LAB_0145807c;
      lVar7 = in_stack_00000008 + unaff_x22 * 4;
      *(bool *)(lVar7 + 0x20) = iStack0000000000000020 == 0;
      *(bool *)(lVar7 + 0x21) = unaff_w26 == iVar9;
      *(bool *)(lVar7 + 0x22) = in_stack_00000010._4_4_ == iVar9;
      *(byte *)(lVar7 + 0x23) = *(byte *)(lVar7 + 0x23) | (byte)unaff_w29 & 1;
      if (4 < in_stack_00000000._4_4_) {
        uVar2 = 0;
        if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
        uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                             *unaff_x21);
        if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) goto LAB_0145804c;
        uVar11 = *(undefined8 *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
        cVar1 = *(char *)(unaff_x20 + 0x49);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        bStack0000000000000024 =
             FUN_01457470(unaff_x22 & 0xffffffff,cVar1 != '\0',in_stack_00000008);
        bStack0000000000000024 = bStack0000000000000024 & 1;
        uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,(long)&stack0x00000020 + 4);
        if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x22) goto LAB_0145807c;
        uStack0000000000000028 = *(undefined4 *)(lVar7 + 0x20);
        uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033eb5f8,&stack0x00000028);
        uVar11 = FUN_01600ba0(*(undefined8 *)
                               System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo,uVar11
                              ,uVar5,uVar6,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_302);
        }
        FUN_02660dac(uVar11,0);
      }
      unaff_x22 = unaff_x22 + 1;
      uVar2 = in_stack_00000008;
      if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
      if ((long)*(int *)(*(long *)(unaff_x20 + 0x70) + 0x18) <= (long)unaff_x22) {
        return;
      }
      uVar2 = 0;
      if (*(long *)(unaff_x20 + 0x58) == 0) goto LAB_0145804c;
      uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x58),0,&stack0x00000028,
                           *(undefined8 *)PTR_DAT_033ee2d8);
      if ((CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) ||
         (lVar7 = *(long *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10),
         lVar7 == 0)) goto LAB_0145804c;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_0145807c;
      unaff_x28 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      if (*(char *)(unaff_x20 + 0x49) == '\0') {
        unaff_s8 = 0.0;
        unaff_s10 = 0.0;
        unaff_s11 = 0.0;
        unaff_s9 = unaff_s13;
      }
      else {
        uVar2 = 0;
        if (*(long *)(unaff_x20 + 0x58) == 0) goto LAB_0145804c;
        lVar7 = *(long *)(unaff_x20 + 0x50);
        uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x58),0,&stack0x00000028,
                             *(undefined8 *)PTR_DAT_033ee2d8);
        if ((CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) ||
           (lVar8 = *(long *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x18),
           lVar8 == 0)) goto LAB_0145804c;
        lVar8 = *(long *)(lVar8 + 0x10);
        uVar2 = 0;
        if (lVar8 == 0) goto LAB_0145804c;
        uVar2 = FUN_0132138c(lVar8,0,&stack0x00000028,*unaff_x19);
        if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) goto LAB_0145804c;
        uVar2 = 0;
        if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
        uVar11 = *(undefined8 *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
        uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                             *unaff_x21);
        if (lVar7 == 0) goto LAB_0145804c;
        unaff_s11 = (float)FUN_0144a380(lVar7,uVar11,
                                        CONCAT44(uStack000000000000002c,uStack0000000000000028),0);
        unaff_s10 = param_2;
        unaff_s8 = param_3;
        unaff_s9 = param_4;
      }
      param_5 = *(long *)(unaff_x20 + 0x58);
      uVar2 = 0;
      if (param_5 == 0) goto LAB_0145804c;
      iStack0000000000000020 = 0;
      unaff_w26 = 0;
      in_stack_00000010._4_4_ = 0;
      unaff_w29 = 1;
      unaff_w24 = 0;
    }
    uVar2 = FUN_0132138c(param_5,unaff_w24,&stack0x00000028,*(undefined8 *)PTR_DAT_033ee2d8);
    lVar7 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    if ((lVar7 == 0) || (lVar8 = *(long *)(lVar7 + 0x10), lVar8 == 0)) goto LAB_0145804c;
    if (*(uint *)(lVar8 + 0x18) <= unaff_x22) {
LAB_0145807c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar8 = *(long *)(lVar8 + unaff_x22 * 8 + 0x20);
    uVar2 = 0;
    if (lVar8 == 0) goto LAB_0145804c;
    uVar3 = FUN_014440c0(lVar8,0);
    lVar8 = *(long *)(lVar7 + 0x10);
    uVar2 = uVar3;
    if (lVar8 == 0) goto LAB_0145804c;
    if (*(uint *)(lVar8 + 0x18) <= unaff_x22) goto LAB_0145807c;
    if (unaff_x28 == 0) goto LAB_0145804c;
    uVar4 = FUN_014442d4(unaff_x28,*(undefined8 *)(lVar8 + unaff_x22 * 8 + 0x20),0);
    if (*(char *)(unaff_x20 + 0x49) != '\0') {
      uVar2 = uVar4;
      if (*(long *)(lVar7 + 0x18) == 0) goto LAB_0145804c;
      lVar8 = *(long *)(*(long *)(lVar7 + 0x18) + 0x10);
      uVar2 = 0;
      if (lVar8 == 0) goto LAB_0145804c;
      lVar10 = *(long *)(unaff_x20 + 0x50);
      uVar2 = FUN_0132138c(lVar8,0,&stack0x00000028,*unaff_x19);
      if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) goto LAB_0145804c;
      uVar2 = 0;
      if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
      uVar11 = *(undefined8 *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
      uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                           *unaff_x21);
      if (lVar10 == 0) goto LAB_0145804c;
      fVar12 = (float)FUN_0144a380(lVar10,uVar11,
                                   CONCAT44(uStack000000000000002c,uStack0000000000000028),0);
      fVar13 = param_2 - unaff_s10;
      param_4 = param_4 - unaff_s9;
      param_3 = (param_3 - unaff_s8) * (param_3 - unaff_s8);
      param_2 = param_4 * param_4;
      if (param_2 + param_3 + (fVar12 - unaff_s11) * (fVar12 - unaff_s11) + fVar13 * fVar13 <
          unaff_s12) {
        in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + 1;
      }
      uVar4 = uVar4 & 0xffffffff;
    }
    lVar8 = *(long *)(lVar7 + 0x18);
    uVar2 = uVar4;
    if (lVar8 == 0) goto LAB_0145804c;
    iStack0000000000000020 = iStack0000000000000020 + (~(uint)uVar3 & 1);
    iVar9 = 0;
    unaff_w26 = unaff_w26 + ((uint)uVar4 & 1);
    while( true ) {
      lVar8 = *(long *)(lVar8 + 0x10);
      uVar2 = 0;
      if (lVar8 == 0) goto LAB_0145804c;
      if (*(int *)(lVar8 + 0x18) <= iVar9) break;
      uVar2 = FUN_0132138c(lVar8,iVar9,&stack0x00000028,*unaff_x19);
      if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) goto LAB_0145804c;
      uVar2 = 0;
      if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
      lVar8 = *(long *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
      uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                           *unaff_x21);
      if ((CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) || (lVar8 == 0))
      goto LAB_0145804c;
      uVar2 = FUN_0267e21c(lVar8,*(undefined8 *)
                                  (CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10),0
                          );
      lVar8 = *(long *)(lVar7 + 0x18);
      unaff_w29 = (uint)uVar2 ^ 1;
      iVar9 = iVar9 + 1;
      if (lVar8 == 0) goto LAB_0145804c;
    }
    unaff_w24 = unaff_w24 + 1;
    param_5 = *(long *)(unaff_x20 + 0x58);
  }
  uVar2 = 0;
LAB_0145804c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c(uVar2);
}


