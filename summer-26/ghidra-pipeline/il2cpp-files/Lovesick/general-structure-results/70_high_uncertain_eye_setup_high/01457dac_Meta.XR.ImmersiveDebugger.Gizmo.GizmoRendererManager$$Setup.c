/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$Setup
ENTRY_POINT: 01457dac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__Setup
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  int unaff_w24;
  ulong unaff_x25;
  int iVar7;
  long unaff_x27;
  long unaff_x28;
  undefined8 uVar8;
  uint unaff_w29;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  undefined8 in_stack_00000000;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  uint uStack0000000000000018;
  int iStack000000000000001c;
  int iStack0000000000000020;
  byte bStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  while( true ) {
    uVar2 = FUN_0132138c(param_5,param_6,param_7,param_8);
    if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) break;
    uVar2 = 0;
    if (*(long *)(unaff_x20 + 0x70) == 0) break;
    uVar8 = *(undefined8 *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
    uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                         *unaff_x21);
    if (unaff_x27 == 0) break;
    fVar9 = (float)FUN_0144a380(unaff_x27,uVar8,
                                CONCAT44(uStack000000000000002c,uStack0000000000000028),0);
    fVar10 = param_2 - unaff_s10;
    param_4 = param_4 - unaff_s9;
    param_3 = (param_3 - unaff_s8) * (param_3 - unaff_s8);
    param_2 = param_4 * param_4;
    if (param_2 + param_3 + (fVar9 - unaff_s11) * (fVar9 - unaff_s11) + fVar10 * fVar10 < unaff_s12)
    {
      in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + 1;
    }
    uVar2 = (ulong)uStack0000000000000018;
    do {
      lVar6 = *(long *)(unaff_x23 + 0x18);
      if (lVar6 == 0) goto LAB_0145804c;
      iStack0000000000000020 = iStack0000000000000020 + (~(uint)unaff_x25 & 1);
      iVar7 = 0;
      iStack000000000000001c = iStack000000000000001c + ((uint)uVar2 & 1);
      while( true ) {
        lVar6 = *(long *)(lVar6 + 0x10);
        uVar2 = 0;
        if (lVar6 == 0) goto LAB_0145804c;
        if (*(int *)(lVar6 + 0x18) <= iVar7) break;
        uVar2 = FUN_0132138c(lVar6,iVar7,&stack0x00000028,*unaff_x19);
        if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) goto LAB_0145804c;
        uVar2 = 0;
        if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
        lVar6 = *(long *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
        uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                             *unaff_x21);
        if ((CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) || (lVar6 == 0))
        goto LAB_0145804c;
        uVar2 = FUN_0267e21c(lVar6,*(undefined8 *)
                                    (CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10)
                             ,0);
        lVar6 = *(long *)(unaff_x23 + 0x18);
        unaff_w29 = (uint)uVar2 ^ 1;
        iVar7 = iVar7 + 1;
        if (lVar6 == 0) goto LAB_0145804c;
      }
      lVar6 = *(long *)(unaff_x20 + 0x58);
      unaff_w24 = unaff_w24 + 1;
      if (lVar6 == 0) {
        uVar2 = 0;
        goto LAB_0145804c;
      }
      while (iVar7 = *(int *)(lVar6 + 0x18), iVar7 <= unaff_w24) {
        uVar2 = in_stack_00000008;
        if (in_stack_00000008 == 0) goto LAB_0145804c;
        if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x22) goto LAB_0145807c;
        lVar6 = in_stack_00000008 + unaff_x22 * 4;
        *(bool *)(lVar6 + 0x20) = iStack0000000000000020 == 0;
        *(bool *)(lVar6 + 0x21) = iStack000000000000001c == iVar7;
        *(bool *)(lVar6 + 0x22) = in_stack_00000010._4_4_ == iVar7;
        *(byte *)(lVar6 + 0x23) = *(byte *)(lVar6 + 0x23) | (byte)unaff_w29 & 1;
        if (4 < in_stack_00000000._4_4_) {
          uVar2 = 0;
          if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
          uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                               *unaff_x21);
          if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) goto LAB_0145804c;
          uVar8 = *(undefined8 *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
          cVar1 = *(char *)(unaff_x20 + 0x49);
          if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0)
          {
            thunk_FUN_00d32864();
          }
          bStack0000000000000024 =
               FUN_01457470(unaff_x22 & 0xffffffff,cVar1 != '\0',in_stack_00000008);
          bStack0000000000000024 = bStack0000000000000024 & 1;
          uVar3 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,(long)&stack0x00000020 + 4);
          if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x22) goto LAB_0145807c;
          uStack0000000000000028 = *(undefined4 *)(lVar6 + 0x20);
          uVar4 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033eb5f8,&stack0x00000028);
          uVar8 = FUN_01600ba0(*(undefined8 *)
                                System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo,uVar8
                               ,uVar3,uVar4,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar8,0);
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
           (lVar6 = *(long *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10),
           lVar6 == 0)) goto LAB_0145804c;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_0145807c;
        unaff_x28 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
        if (*(char *)(unaff_x20 + 0x49) == '\0') {
          unaff_s8 = 0.0;
          unaff_s10 = 0.0;
          unaff_s11 = 0.0;
          unaff_s9 = unaff_s13;
        }
        else {
          uVar2 = 0;
          if (*(long *)(unaff_x20 + 0x58) == 0) goto LAB_0145804c;
          lVar6 = *(long *)(unaff_x20 + 0x50);
          uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x58),0,&stack0x00000028,
                               *(undefined8 *)PTR_DAT_033ee2d8);
          if ((CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) ||
             (lVar5 = *(long *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x18),
             lVar5 == 0)) goto LAB_0145804c;
          lVar5 = *(long *)(lVar5 + 0x10);
          uVar2 = 0;
          if (lVar5 == 0) goto LAB_0145804c;
          uVar2 = FUN_0132138c(lVar5,0,&stack0x00000028,*unaff_x19);
          if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) goto LAB_0145804c;
          uVar2 = 0;
          if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
          uVar8 = *(undefined8 *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
          uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                               *unaff_x21);
          if (lVar6 == 0) goto LAB_0145804c;
          unaff_s11 = (float)FUN_0144a380(lVar6,uVar8,
                                          CONCAT44(uStack000000000000002c,uStack0000000000000028),0)
          ;
          unaff_s10 = param_2;
          unaff_s8 = param_3;
          unaff_s9 = param_4;
        }
        lVar6 = *(long *)(unaff_x20 + 0x58);
        uVar2 = 0;
        if (lVar6 == 0) goto LAB_0145804c;
        iStack0000000000000020 = 0;
        iStack000000000000001c = 0;
        in_stack_00000010._4_4_ = 0;
        unaff_w29 = 1;
        unaff_w24 = 0;
      }
      uVar2 = FUN_0132138c(lVar6,unaff_w24,&stack0x00000028,*(undefined8 *)PTR_DAT_033ee2d8);
      unaff_x23 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      if ((unaff_x23 == 0) || (lVar6 = *(long *)(unaff_x23 + 0x10), lVar6 == 0)) goto LAB_0145804c;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) {
LAB_0145807c:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar6 = *(long *)(lVar6 + unaff_x22 * 8 + 0x20);
      uVar2 = 0;
      if (lVar6 == 0) goto LAB_0145804c;
      uVar2 = FUN_014440c0(lVar6,0);
      lVar6 = *(long *)(unaff_x23 + 0x10);
      if (lVar6 == 0) goto LAB_0145804c;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_0145807c;
      if (unaff_x28 == 0) goto LAB_0145804c;
      unaff_x25 = uVar2 & 0xffffffff;
      uVar2 = FUN_014442d4(unaff_x28,*(undefined8 *)(lVar6 + unaff_x22 * 8 + 0x20),0);
    } while (*(char *)(unaff_x20 + 0x49) == '\0');
    if (*(long *)(unaff_x23 + 0x18) == 0) break;
    uStack0000000000000018 = (uint)uVar2;
    param_5 = *(long *)(*(long *)(unaff_x23 + 0x18) + 0x10);
    uVar2 = 0;
    if (param_5 == 0) break;
    param_8 = *unaff_x19;
    unaff_x27 = *(long *)(unaff_x20 + 0x50);
    param_7 = (undefined8 *)&stack0x00000028;
    param_6 = 0;
  }
LAB_0145804c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c(uVar2);
}


