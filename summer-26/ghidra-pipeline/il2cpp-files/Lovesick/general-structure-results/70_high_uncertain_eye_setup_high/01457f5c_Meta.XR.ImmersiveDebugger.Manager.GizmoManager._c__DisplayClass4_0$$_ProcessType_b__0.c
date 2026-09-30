/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager.<>c__DisplayClass4_0$$<ProcessType>b__0
ENTRY_POINT: 01457f5c
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


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager_<>c__DisplayClass4_0__<ProcessType>b__0
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               ulong param_6,undefined8 *param_7,undefined8 param_8)

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
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  undefined4 *unaff_x25;
  int iVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float unaff_s12;
  float unaff_s13;
  undefined8 in_stack_00000000;
  ulong in_stack_00000008;
  int iStack0000000000000014;
  int iStack0000000000000020;
  byte bStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  while( true ) {
    uVar4 = FUN_0132138c(param_5,param_6,param_7,param_8);
    if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) break;
    uVar9 = *(undefined8 *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
    cVar1 = *(char *)(unaff_x20 + 0x49);
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    bStack0000000000000024 = FUN_01457470(unaff_x22 & 0xffffffff,cVar1 != '\0',in_stack_00000008);
    bStack0000000000000024 = bStack0000000000000024 & 1;
    uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,(long)&stack0x00000020 + 4);
    if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x22) {
LAB_0145807c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    uStack0000000000000028 = *unaff_x25;
    uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033eb5f8,&stack0x00000028);
    uVar9 = FUN_01600ba0(*(undefined8 *)
                          System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo,uVar9,uVar5
                         ,uVar6,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar9,0);
    do {
      unaff_x22 = unaff_x22 + 1;
      uVar4 = in_stack_00000008;
      if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
      if ((long)*(int *)(*(long *)(unaff_x20 + 0x70) + 0x18) <= (long)unaff_x22) {
        return;
      }
      uVar4 = 0;
      if (*(long *)(unaff_x20 + 0x58) == 0) goto LAB_0145804c;
      uVar4 = FUN_0132138c(*(long *)(unaff_x20 + 0x58),0,&stack0x00000028,
                           *(undefined8 *)PTR_DAT_033ee2d8);
      if ((CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) ||
         (lVar7 = *(long *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10),
         lVar7 == 0)) goto LAB_0145804c;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_0145807c;
      lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
      if (*(char *)(unaff_x20 + 0x49) == '\0') {
        fVar19 = 0.0;
        fVar21 = 0.0;
        fVar16 = 0.0;
        fVar20 = unaff_s13;
      }
      else {
        uVar4 = 0;
        if (*(long *)(unaff_x20 + 0x58) == 0) goto LAB_0145804c;
        lVar11 = *(long *)(unaff_x20 + 0x50);
        uVar4 = FUN_0132138c(*(long *)(unaff_x20 + 0x58),0,&stack0x00000028,
                             *(undefined8 *)PTR_DAT_033ee2d8);
        if ((CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) ||
           (lVar8 = *(long *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x18),
           lVar8 == 0)) goto LAB_0145804c;
        lVar8 = *(long *)(lVar8 + 0x10);
        uVar4 = 0;
        if (lVar8 == 0) goto LAB_0145804c;
        uVar4 = FUN_0132138c(lVar8,0,&stack0x00000028,*unaff_x19);
        if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) goto LAB_0145804c;
        uVar4 = 0;
        if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
        uVar9 = *(undefined8 *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
        uVar4 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                             *unaff_x21);
        if (lVar11 == 0) goto LAB_0145804c;
        fVar16 = (float)FUN_0144a380(lVar11,uVar9,
                                     CONCAT44(uStack000000000000002c,uStack0000000000000028),0);
        fVar21 = param_2;
        fVar19 = param_3;
        fVar20 = param_4;
      }
      lVar11 = *(long *)(unaff_x20 + 0x58);
      uVar4 = 0;
      if (lVar11 == 0) goto LAB_0145804c;
      iStack0000000000000020 = 0;
      iVar12 = 0;
      iStack0000000000000014 = 0;
      iVar10 = 0;
      uVar15 = 1;
      while (iVar13 = *(int *)(lVar11 + 0x18), iVar10 < iVar13) {
        uVar4 = FUN_0132138c(lVar11,iVar10,&stack0x00000028,*(undefined8 *)PTR_DAT_033ee2d8);
        lVar11 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        if ((lVar11 == 0) || (lVar8 = *(long *)(lVar11 + 0x10), lVar8 == 0)) goto LAB_0145804c;
        if (*(uint *)(lVar8 + 0x18) <= unaff_x22) goto LAB_0145807c;
        lVar8 = *(long *)(lVar8 + unaff_x22 * 8 + 0x20);
        uVar4 = 0;
        if (lVar8 == 0) goto LAB_0145804c;
        uVar2 = FUN_014440c0(lVar8,0);
        lVar8 = *(long *)(lVar11 + 0x10);
        uVar4 = uVar2;
        if (lVar8 == 0) goto LAB_0145804c;
        if (*(uint *)(lVar8 + 0x18) <= unaff_x22) goto LAB_0145807c;
        if (lVar7 == 0) goto LAB_0145804c;
        uVar3 = FUN_014442d4(lVar7,*(undefined8 *)(lVar8 + unaff_x22 * 8 + 0x20),0);
        if (*(char *)(unaff_x20 + 0x49) != '\0') {
          uVar4 = uVar3;
          if (*(long *)(lVar11 + 0x18) == 0) goto LAB_0145804c;
          lVar8 = *(long *)(*(long *)(lVar11 + 0x18) + 0x10);
          uVar4 = 0;
          if (lVar8 == 0) goto LAB_0145804c;
          lVar14 = *(long *)(unaff_x20 + 0x50);
          uVar4 = FUN_0132138c(lVar8,0,&stack0x00000028,*unaff_x19);
          if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) goto LAB_0145804c;
          uVar4 = 0;
          if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
          uVar9 = *(undefined8 *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
          uVar4 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                               *unaff_x21);
          if (lVar14 == 0) goto LAB_0145804c;
          fVar17 = (float)FUN_0144a380(lVar14,uVar9,
                                       CONCAT44(uStack000000000000002c,uStack0000000000000028),0);
          fVar18 = param_2 - fVar21;
          param_4 = param_4 - fVar20;
          param_3 = (param_3 - fVar19) * (param_3 - fVar19);
          param_2 = param_4 * param_4;
          if (param_2 + param_3 + (fVar17 - fVar16) * (fVar17 - fVar16) + fVar18 * fVar18 <
              unaff_s12) {
            iStack0000000000000014 = iStack0000000000000014 + 1;
          }
          uVar3 = uVar3 & 0xffffffff;
        }
        lVar8 = *(long *)(lVar11 + 0x18);
        uVar4 = uVar3;
        if (lVar8 == 0) goto LAB_0145804c;
        iStack0000000000000020 = iStack0000000000000020 + (~(uint)uVar2 & 1);
        iVar13 = 0;
        iVar12 = iVar12 + ((uint)uVar3 & 1);
        while( true ) {
          lVar8 = *(long *)(lVar8 + 0x10);
          uVar4 = 0;
          if (lVar8 == 0) goto LAB_0145804c;
          if (*(int *)(lVar8 + 0x18) <= iVar13) break;
          uVar4 = FUN_0132138c(lVar8,iVar13,&stack0x00000028,*unaff_x19);
          if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) goto LAB_0145804c;
          uVar4 = 0;
          if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
          lVar8 = *(long *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
          uVar4 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                               *unaff_x21);
          if ((CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) || (lVar8 == 0))
          goto LAB_0145804c;
          uVar4 = FUN_0267e21c(lVar8,*(undefined8 *)
                                      (CONCAT44(uStack000000000000002c,uStack0000000000000028) +
                                      0x10),0);
          lVar8 = *(long *)(lVar11 + 0x18);
          uVar15 = (uint)uVar4 ^ 1;
          iVar13 = iVar13 + 1;
          if (lVar8 == 0) goto LAB_0145804c;
        }
        lVar11 = *(long *)(unaff_x20 + 0x58);
        iVar10 = iVar10 + 1;
        if (lVar11 == 0) {
          uVar4 = 0;
          goto LAB_0145804c;
        }
      }
      uVar4 = in_stack_00000008;
      if (in_stack_00000008 == 0) goto LAB_0145804c;
      if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x22) goto LAB_0145807c;
      lVar7 = in_stack_00000008 + unaff_x22 * 4;
      unaff_x25 = (undefined4 *)(lVar7 + 0x20);
      *(bool *)unaff_x25 = iStack0000000000000020 == 0;
      *(bool *)(lVar7 + 0x21) = iVar12 == iVar13;
      *(bool *)(lVar7 + 0x22) = iStack0000000000000014 == iVar13;
      *(byte *)(lVar7 + 0x23) = *(byte *)(lVar7 + 0x23) | (byte)uVar15 & 1;
    } while (in_stack_00000000._4_4_ < 5);
    param_5 = *(long *)(unaff_x20 + 0x70);
    uVar4 = 0;
    if (param_5 == 0) break;
    param_8 = *unaff_x21;
    param_7 = (undefined8 *)&stack0x00000028;
    param_6 = unaff_x22 & 0xffffffff;
  }
LAB_0145804c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c(uVar4);
}


