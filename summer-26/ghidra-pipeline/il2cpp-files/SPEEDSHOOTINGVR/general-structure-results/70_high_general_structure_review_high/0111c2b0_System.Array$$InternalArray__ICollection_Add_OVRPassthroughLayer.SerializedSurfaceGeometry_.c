/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 0111c2b0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (long param_1,long param_2,int param_3,int param_4,undefined8 param_5,
               undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long lVar6;
  
  if (param_1 == 0) {
    FUN_0103c2a0();
  }
  if (param_2 == 0) {
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar4 = thunk_FUN_010400dc();
    uVar5 = thunk_FUN_010303a8(PTR_DAT_0234be10);
    FUN_01c5e120(uVar4,uVar5,0);
  }
  else if ((param_4 < 0) || (param_3 < 0)) {
    puVar1 = PTR_DAT_0234be20;
    if (-1 < param_3) {
      puVar1 = PTR_DAT_0234be18;
    }
    uVar5 = thunk_FUN_010303a8(puVar1);
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar4 = thunk_FUN_010400dc();
    uVar3 = thunk_FUN_010303a8(PTR_DAT_0234be30);
    FUN_01c62494(uVar4,uVar5,uVar3,0);
  }
  else {
    if (param_4 <= *(int *)(param_2 + 0x18) - param_3) {
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      FUN_01731bc0(**(long **)(lVar2 + 0xb8),param_2,param_3,param_4,param_5,param_6);
      return;
    }
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar4 = thunk_FUN_010400dc();
    uVar5 = thunk_FUN_010303a8(PTR_DAT_0234be38);
    FUN_01c65ad0(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar4);
}


