/*
FUNCTION_NAME: FUN_06651b5c
ENTRY_POINT: 06651b5c
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_06651b5c(int *param_1,uint param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  
  if ((int)param_2 < 0) {
System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__Dispose:
    thunk_FUN_049ae08c(PTR_DAT_0ac0c088);
    uVar3 = thunk_FUN_04983f60();
    uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac161d0);
    FUN_08cc57b4(uVar3,uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar3,param_3);
  }
  iVar4 = *param_1;
  if (iVar4 <= (int)param_2)
  goto System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__Dispose;
  if (param_2 == 0) {
    plVar5 = (long *)(param_1 + 6);
    lVar1 = *plVar5;
    if (lVar1 == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      goto LAB_06651d0c;
    }
    if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(param_1 + 2) = uVar3;
    thunk_FUN_049ee3d8(param_1 + 2,0);
    lVar1 = *(long *)(param_1 + 6);
    if (lVar1 == 0) {
LAB_06651d64:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(int *)(lVar1 + 0x18) != 1) {
      FUN_08d9f1fc(lVar1,1,lVar1,0,*(int *)(lVar1 + 0x18) + -1,0);
      if (*plVar5 == 0) goto LAB_06651d64;
      lVar1 = *(long *)(param_3 + 0x20);
      iVar4 = *(int *)(*plVar5 + 0x18) + -1;
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04980b34();
      }
      lVar1 = *(long *)(lVar1 + 0xc0);
      goto LAB_06651d00;
    }
    *plVar5 = 0;
LAB_06651be8:
    uVar3 = 0;
  }
  else {
    if (iVar4 - 1U == 1) {
      param_1[6] = 0;
      param_1[7] = 0;
      goto LAB_06651be8;
    }
    if (iVar4 - 1U == param_2) {
      lVar1 = *(long *)(param_3 + 0x20);
      iVar4 = iVar4 + -2;
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04980b34();
      }
      lVar1 = *(long *)(lVar1 + 0xc0);
LAB_06651d00:
      FUN_059ae428(param_1 + 6,iVar4,*(undefined8 *)(lVar1 + 0x60));
      goto LAB_06651d0c;
    }
    lVar1 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04980b34();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04980b34();
    }
    uVar3 = FUN_04947fd0(lVar1,iVar4 + -2);
    iVar4 = param_2 - 1;
    if (iVar4 != 0) {
      FUN_08d9f1fc(*(undefined8 *)(param_1 + 6),0,uVar3,0,iVar4,0);
    }
    FUN_08d9f1fc(*(undefined8 *)(param_1 + 6),param_2,uVar3,iVar4,*param_1 + ~param_2,0);
    *(undefined8 *)(param_1 + 6) = uVar3;
  }
  thunk_FUN_049ee3d8(param_1 + 6,uVar3);
LAB_06651d0c:
  *param_1 = *param_1 + -1;
  return;
}


