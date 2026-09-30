/*
FUNCTION_NAME: Newtonsoft.Json.Utilities.CollectionWrapper<__Il2CppFullySharedGenericType>$$System.Collections.IList.RemoveAt
ENTRY_POINT: 02076f80
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02077118) */

void Newtonsoft_Json_Utilities_CollectionWrapper<__Il2CppFullySharedGenericType>__System_Collections_IList_RemoveAt
               (void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 in_w8;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  long unaff_x20;
  uint unaff_w21;
  uint uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  char cStack000000000000000c;
  
  *(undefined1 *)(unaff_x19 + 0xd91) = in_w8;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar7,&stack0x0000000c,0);
  lVar10 = *(long *)(unaff_x20 + 0x10);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar3 = *(int *)(lVar10 + 0x18);
  iVar4 = iVar3 - unaff_w21;
  if (7 < iVar4) {
    iVar4 = 8;
  }
  if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdee0);
    iVar3 = *(int *)(lVar10 + 0x18);
  }
  iVar4 = FUN_0276c214(iVar3,iVar4 + unaff_w21,0);
  if ((int)unaff_w21 < iVar4) {
    lVar10 = *(long *)(unaff_x20 + 0x10);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = 0;
    lVar11 = 0;
    do {
      iVar3 = (int)lVar11;
      uVar8 = (uint)*(undefined8 *)(lVar10 + 0x18);
      if (uVar8 <= unaff_w21 + iVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
                    /* try { // try from 0207701c to 0217711b has its CatchHandler @ 02076bc4 */
      if (*(long *)(lVar10 + (long)(int)(unaff_w21 + iVar3) * 8 + 0x20) == unaff_x22) {
        if (1 < (int)(unaff_w21 + iVar3)) {
          uVar12 = (unaff_w21 - 1) + iVar3;
          if (uVar8 <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar1 = lVar10 + (ulong)unaff_w21 * 8;
          lVar2 = lVar1 + 0x20;
          uVar9 = *(undefined8 *)(lVar2 + lVar11 * 8);
          *(undefined8 *)(lVar2 + lVar11 * 8) =
               *(undefined8 *)(lVar10 + (long)(int)uVar12 * 8 + 0x20);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists((lVar1 - lVar6) + 0x20);
          lVar10 = *(long *)(unaff_x20 + 0x10);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar8 = (unaff_w21 - 2) + iVar3;
          if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          *(undefined8 *)(lVar10 + (long)(int)uVar12 * 8 + 0x20) =
               *(undefined8 *)(lVar10 + (long)(int)uVar8 * 8 + 0x20);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar10 = *(long *)(unaff_x20 + 0x10);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          puVar5 = (undefined8 *)(lVar10 + (long)(int)uVar8 * 8 + 0x20);
          *puVar5 = uVar9;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar5,uVar9);
        }
        break;
      }
      lVar11 = lVar11 + 1;
      lVar6 = lVar6 + -8;
    } while ((unaff_w21 - iVar4) + (int)lVar11 != 0);
  }
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
  }
  return;
}


