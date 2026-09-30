/*
FUNCTION_NAME: Unity.Services.Analytics.CustomEvent.<GetEnumerator>d__4$$<>m__Finally2
ENTRY_POINT: 05ab3f64
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_3
*/


void Unity_Services_Analytics_CustomEvent_<GetEnumerator>d__4__<>m__Finally2(void)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  long unaff_x19;
  long *unaff_x20;
  long lVar7;
  byte bVar8;
  long unaff_x21;
  int unaff_w22;
  float fVar9;
  
  FUN_02d6084c(
              Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_ContainsKey__
              );
  *(undefined1 *)(unaff_x21 + 0x6cb) = 1;
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_get_Item__;
  lVar7 = *(long *)(unaff_x19 + 0xb0);
  if ((*(byte *)(*(long *)(*unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  iVar1 = *(int *)(lVar7 + (long)unaff_w22 * 4);
  FUN_05ac3bb4(unaff_x19 + 0x178,unaff_x19 + 0xa0,iVar1,0);
  if ((*(byte *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0(*(long *)(*(long *)puVar2 + 0x20));
  }
  puVar2 = PTR_DAT_0676be30;
  uVar5 = FUN_05ab3d88();
  if (uVar5 != 0) {
    fVar9 = (float)FUN_05ab38d4();
    if (fVar9 == 0.0) {
      uVar5 = 0;
    }
    else {
      if (*(char *)(unaff_x19 + 5) != '\0') {
        uVar6 = FUN_05ac9f70();
        uVar5 = uVar6 & 1 | uVar5 << 1;
      }
      if (*(char *)(unaff_x19 + 4) != '\0') {
        if (fVar9 == 1.0) {
          bVar3 = false;
          uVar4 = 0x7f;
        }
        else {
          bVar3 = fVar9 < 2.0;
          if (!bVar3) {
            fVar9 = fVar9 + -2.0;
          }
          uVar4 = Unity_Services_Analytics_CustomEvent_<GetEnumerator>d__4__System_IDisposable_Dispose
                            (fVar9);
        }
        bVar8 = bVar3 | (byte)(uVar5 << 1);
        goto LAB_05ab402c;
      }
    }
  }
  bVar8 = (byte)uVar5;
  uVar4 = 0x7f;
LAB_05ab402c:
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  *(byte *)(*(long *)(unaff_x19 + 0x228) + (long)iVar1) = bVar8;
  *(undefined1 *)(*(long *)(unaff_x19 + 0x238) + (long)iVar1) = uVar4;
  return;
}


