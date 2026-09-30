/*
FUNCTION_NAME: OVRAnchor$$Dispose
ENTRY_POINT: 0902aaf0
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


uint OVRAnchor__Dispose(void)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int in_w8;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int iVar6;
  int iVar7;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  uint unaff_w28;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined4 in_stack_00000018;
  
code_r0x0902aaf0:
  iVar6 = unaff_w23;
  if (in_w8 <= unaff_w23) {
OVRAnchor_Telemetry__OnInit:
    return unaff_w28 & 1;
  }
  do {
    FUN_06aa6c9c((long)&stack0x00000008 + 4,in_x9,unaff_w23,*unaff_x26);
    uVar2 = in_stack_00000018;
    if (unaff_x21 == 0) goto LAB_0902ac44;
    fVar9 = fStack0000000000000010 - unaff_s9;
    fVar10 = in_stack_00000008._4_4_ - unaff_s10;
    fVar8 = fStack0000000000000014 - unaff_s8;
    uVar3 = FUN_08fdf6a8(fVar10,fVar9,fVar8,in_stack_00000018,*(undefined8 *)(unaff_x21 + 0x10),0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x18);
      if (lVar4 == 0) goto LAB_0902ac44;
      iVar7 = 0;
      while (iVar7 < *(int *)(lVar4 + 0x18)) {
        uVar5 = FUN_06b7fba4(lVar4,iVar7,*unaff_x27);
        uVar3 = FUN_08fdf6a8(fVar10,fVar9,fVar8,uVar2,uVar5,0);
        if ((uVar3 & 1) != 0) {
          if (unaff_x20 == 0) {
            unaff_w28 = 1;
            goto OVRAnchor_Telemetry__OnInit;
          }
          lVar4 = *(long *)(unaff_x20 + 0x10);
          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
          if (lVar4 == 0) goto LAB_0902ac44;
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            unaff_w28 = 1;
            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
            *(int *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = unaff_w23;
          }
          else {
            FUN_06b1154c();
            unaff_w28 = 1;
          }
          break;
        }
        lVar4 = *(long *)(unaff_x21 + 0x18);
        iVar7 = iVar7 + 1;
        if (lVar4 == 0) goto LAB_0902ac44;
      }
    }
    iVar6 = iVar6 + 1;
    if (unaff_x19 == 0) break;
    if (*(int *)(unaff_x19 + 0x18) <= iVar6) goto OVRAnchor_Telemetry__OnInit;
    unaff_w23 = FUN_06b11254();
    in_x9 = *(long *)(unaff_x22 + 0x28);
    if (in_x9 == 0) goto LAB_0902ac44;
  } while( true );
  in_x9 = *(long *)(unaff_x22 + 0x28);
  if (in_x9 == 0) {
LAB_0902ac44:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  in_w8 = *(int *)(in_x9 + 0x18);
  unaff_w23 = iVar6;
  goto code_r0x0902aaf0;
}


