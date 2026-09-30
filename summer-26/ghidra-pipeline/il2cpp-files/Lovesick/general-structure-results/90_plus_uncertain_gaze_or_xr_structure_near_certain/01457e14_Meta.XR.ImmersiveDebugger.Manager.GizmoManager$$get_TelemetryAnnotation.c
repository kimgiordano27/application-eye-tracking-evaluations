/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager$$get_TelemetryAnnotation
ENTRY_POINT: 01457e14
PROGRAM: Lovesick-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager__get_TelemetryAnnotation
               (float param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  int unaff_w24;
  ulong unaff_x25;
  long unaff_x26;
  int iVar6;
  long lVar7;
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
  
  do {
    fVar10 = param_4 * param_4;
    if (fVar10 + param_1 < unaff_s12) {
      in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + 1;
    }
    uVar2 = (ulong)uStack0000000000000018;
    do {
      lVar5 = *(long *)(unaff_x23 + 0x18);
      if (lVar5 == 0) goto LAB_0145804c;
      iStack0000000000000020 = iStack0000000000000020 + (~(uint)unaff_x25 & 1);
      iVar6 = 0;
      iStack000000000000001c = iStack000000000000001c + ((uint)uVar2 & 1);
      while( true ) {
        lVar5 = *(long *)(lVar5 + 0x10);
        uVar2 = 0;
        if (lVar5 == 0) goto LAB_0145804c;
        if (*(int *)(lVar5 + 0x18) <= iVar6) break;
        uVar2 = FUN_0132138c(lVar5,iVar6,&stack0x00000028,*unaff_x19);
        if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) goto LAB_0145804c;
        uVar2 = 0;
        if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
        lVar5 = *(long *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
        uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                             *unaff_x21);
        if ((CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) || (lVar5 == 0))
        goto LAB_0145804c;
        uVar2 = FUN_0267e21c(lVar5,*(undefined8 *)
                                    (CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10)
                             ,0);
        lVar5 = *(long *)(unaff_x23 + 0x18);
        unaff_w29 = (uint)uVar2 ^ 1;
        iVar6 = iVar6 + 1;
        if (lVar5 == 0) goto LAB_0145804c;
      }
      lVar5 = *(long *)(unaff_x20 + 0x58);
      unaff_w24 = unaff_w24 + 1;
      if (lVar5 == 0) {
        uVar2 = 0;
        goto LAB_0145804c;
      }
      while (iVar6 = *(int *)(lVar5 + 0x18), iVar6 <= unaff_w24) {
        uVar2 = in_stack_00000008;
        if (in_stack_00000008 == 0) goto LAB_0145804c;
        if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x22) goto LAB_0145807c;
        lVar5 = in_stack_00000008 + unaff_x22 * 4;
        *(bool *)(lVar5 + 0x20) = iStack0000000000000020 == 0;
        *(bool *)(lVar5 + 0x21) = iStack000000000000001c == iVar6;
        *(bool *)(lVar5 + 0x22) = in_stack_00000010._4_4_ == iVar6;
        *(byte *)(lVar5 + 0x23) = *(byte *)(lVar5 + 0x23) | (byte)unaff_w29 & 1;
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
          uStack0000000000000028 = *(undefined4 *)(lVar5 + 0x20);
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
           (lVar5 = *(long *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10),
           lVar5 == 0)) goto LAB_0145804c;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x22) goto LAB_0145807c;
        unaff_x26 = *(long *)(lVar5 + unaff_x22 * 8 + 0x20);
        if (*(char *)(unaff_x20 + 0x49) == '\0') {
          unaff_s8 = 0.0;
          unaff_s10 = 0.0;
          unaff_s11 = 0.0;
          unaff_s9 = unaff_s13;
        }
        else {
          uVar2 = 0;
          if (*(long *)(unaff_x20 + 0x58) == 0) goto LAB_0145804c;
          lVar5 = *(long *)(unaff_x20 + 0x50);
          uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x58),0,&stack0x00000028,
                               *(undefined8 *)PTR_DAT_033ee2d8);
          if ((CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) ||
             (lVar7 = *(long *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x18),
             lVar7 == 0)) goto LAB_0145804c;
          lVar7 = *(long *)(lVar7 + 0x10);
          uVar2 = 0;
          if (lVar7 == 0) goto LAB_0145804c;
          uVar2 = FUN_0132138c(lVar7,0,&stack0x00000028,*unaff_x19);
          if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) goto LAB_0145804c;
          uVar2 = 0;
          if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
          uVar8 = *(undefined8 *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
          uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                               *unaff_x21);
          if (lVar5 == 0) goto LAB_0145804c;
          unaff_s11 = (float)FUN_0144a380(lVar5,uVar8,
                                          CONCAT44(uStack000000000000002c,uStack0000000000000028),0)
          ;
          unaff_s10 = fVar10;
          unaff_s8 = param_3;
          unaff_s9 = param_4;
        }
        lVar5 = *(long *)(unaff_x20 + 0x58);
        uVar2 = 0;
        if (lVar5 == 0) goto LAB_0145804c;
        iStack0000000000000020 = 0;
        iStack000000000000001c = 0;
        in_stack_00000010._4_4_ = 0;
        unaff_w29 = 1;
        unaff_w24 = 0;
      }
      uVar2 = FUN_0132138c(lVar5,unaff_w24,&stack0x00000028,*(undefined8 *)PTR_DAT_033ee2d8);
      unaff_x23 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      if ((unaff_x23 == 0) || (lVar5 = *(long *)(unaff_x23 + 0x10), lVar5 == 0)) goto LAB_0145804c;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) {
LAB_0145807c:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar5 = *(long *)(lVar5 + unaff_x22 * 8 + 0x20);
      uVar2 = 0;
      if (lVar5 == 0) goto LAB_0145804c;
      uVar2 = FUN_014440c0(lVar5,0);
      lVar5 = *(long *)(unaff_x23 + 0x10);
      if (lVar5 == 0) goto LAB_0145804c;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) goto LAB_0145807c;
      if (unaff_x26 == 0) goto LAB_0145804c;
      unaff_x25 = uVar2 & 0xffffffff;
      uVar2 = FUN_014442d4(unaff_x26,*(undefined8 *)(lVar5 + unaff_x22 * 8 + 0x20),0);
    } while (*(char *)(unaff_x20 + 0x49) == '\0');
    if (*(long *)(unaff_x23 + 0x18) == 0) {
LAB_0145804c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c(uVar2);
    }
    uStack0000000000000018 = (uint)uVar2;
    lVar5 = *(long *)(*(long *)(unaff_x23 + 0x18) + 0x10);
    uVar2 = 0;
    if (lVar5 == 0) goto LAB_0145804c;
    lVar7 = *(long *)(unaff_x20 + 0x50);
    uVar2 = FUN_0132138c(lVar5,0,&stack0x00000028,*unaff_x19);
    if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) goto LAB_0145804c;
    uVar2 = 0;
    if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
    uVar8 = *(undefined8 *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
    uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                         *unaff_x21);
    if (lVar7 == 0) goto LAB_0145804c;
    fVar9 = (float)FUN_0144a380(lVar7,uVar8,CONCAT44(uStack000000000000002c,uStack0000000000000028),
                                0);
    param_4 = param_4 - unaff_s9;
    param_3 = (param_3 - unaff_s8) * (param_3 - unaff_s8);
    param_1 = param_3 + (fVar9 - unaff_s11) * (fVar9 - unaff_s11) +
                        (fVar10 - unaff_s10) * (fVar10 - unaff_s10);
  } while( true );
}


