/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_springBone.GltfDeserializer$$Deserialize_Colliders_ITEM
ENTRY_POINT: 07c6a604
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void UniGLTF_Extensions_VRMC_springBone_GltfDeserializer__Deserialize_Colliders_ITEM
               (ulong param_1,undefined1 param_2 [16],ulong param_3,long param_4,int param_5,
               uint param_6)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x21;
  int iVar7;
  ulong unaff_x22;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  uint uStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083d0578,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083d0568,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x21 + 0xa89) = 1;
  }
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar3 = FUN_07a119fc(param_4,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uStack000000000000000c = param_6;
  if ((unaff_x22 & 1) != 0) {
    if (param_4 == 0) goto LAB_07c6a8a4;
    iVar7 = 0;
    while( true ) {
      if (DAT_086ef8c8 == (code *)0x0) {
        DAT_086ef8c8 = (code *)FUN_033d1b68("UnityEngine.Transform::get_childCount()");
      }
      iVar2 = (*DAT_086ef8c8)(param_4);
      if (iVar2 <= iVar7) break;
      if (DAT_086ef930 == (code *)0x0) {
        DAT_086ef930 = (code *)FUN_033d1b68("UnityEngine.Transform::GetChild(System.Int32)");
      }
      plVar4 = (long *)(*DAT_086ef930)(param_4,iVar7);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
      }
      else if (*plVar4 != DAT_083d0568) {
        plVar4 = (long *)0x0;
      }
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar3 = FUN_07a0d2c4(plVar4,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(DAT_083d0578 + 0xe0) == 0) {
          FUN_033b9870();
        }
        FUN_07c6a5d4(plVar4,param_5,0,1);
      }
      iVar7 = iVar7 + 1;
    }
  }
  if (param_4 == 0) {
LAB_07c6a8a4:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  uVar3 = FUN_07a1807c(param_4,0);
  uVar1 = uStack000000000000000c;
  if (param_5 == 0) {
    uVar3 = (ulong)(uint)(1.0 - (float)uVar3);
  }
  else {
    if (param_5 != 1) goto LAB_07c6a8a8;
    param_3 = (ulong)(uint)(1.0 - (float)param_3);
  }
  FUN_07a1810c(uVar3,param_4,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar3 = FUN_07a17e44(param_4,0);
  if (param_5 == 0) {
    uVar3 = (ulong)(uint)-(float)uVar3;
  }
  else {
    if (param_5 != 1) goto LAB_07c6a8a8;
    param_3 = (ulong)(uint)-(float)param_3;
  }
  FUN_07a17ed4(uVar3,param_4,0);
  uVar8 = FUN_07a17c0c(param_4,0);
  uVar3 = param_3;
  uVar9 = FUN_07a17d28(param_4,0);
  if (param_5 == 0) {
    uVar10 = (ulong)(uint)(1.0 - (float)uVar9);
    uVar9 = (ulong)(uint)(1.0 - (float)uVar8);
  }
  else {
    if (param_5 != 1) {
LAB_07c6a8a8:
      FUN_033d1ba8(&DAT_083cd790);
      uVar5 = thunk_FUN_03398a84();
      uVar6 = FUN_033d1ba8(&DAT_0843dd30);
      FUN_0682a030(uVar5,uVar6,0);
      uVar6 = FUN_033d1ba8(&DAT_0841a3c0);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar5,uVar6);
    }
    fVar11 = (float)uVar3;
    uVar3 = (ulong)(uint)(1.0 - (float)param_3);
    uVar10 = uVar8;
    param_3 = (ulong)(uint)(1.0 - fVar11);
  }
  FUN_07a17c9c(uVar10,param_3,param_4,0);
  FUN_07a17db8(uVar9,uVar3,param_4,0);
  return;
}


