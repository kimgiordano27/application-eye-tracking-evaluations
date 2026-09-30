/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRSession
ENTRY_POINT: 0567dbd0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetNativeOpenXRSession(ushort *param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x19;
  undefined8 uVar7;
  long *unaff_x23;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_02dcfd18();
  }
  uVar7 = *(undefined8 *)(*(long *)(param_2 + 0xb8) + 8);
  if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)PTR_DAT_069fb990);
  }
                    /* try { // try from 0567dc08 to 0577dc17 has its CatchHandler @ 0567dd24 */
  uVar4 = FUN_06350670(uVar7,0,0);
  puVar2 = System_Collections_Generic_List<TcpClient>_TypeInfo;
  if ((uVar4 & 1) != 0) {
    return;
  }
                    /* catch() { ... } // from try @ 0567da00 with catch @ 0567dc1c
                       catch() { ... } // from try @ 0567da80 with catch @ 0567dc1c */
  lVar5 = *(long *)System_Collections_Generic_List<TcpClient>_TypeInfo;
                    /* try { // try from 0567dc20 to 0577dc23 has its CatchHandler @ 0567dd48 */
                    /* try { // try from 0567dc24 to 0577dc43 has its CatchHandler @ 0567ccdc */
  if (*(int *)(lVar5 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0567d700 with catch @ 0567dc28 */
    thunk_FUN_02df485c();
                    /* catch() { ... } // from try @ 0567ced0 with catch @ 0567dc2c */
    lVar5 = *(long *)puVar2;
  }
  lVar6 = *(long *)(*unaff_x23 + 0x20);
  uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                    /* try { // try from 0567dc44 to 0577dc5b has its CatchHandler @ 0567dd18 */
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02dcfd18(lVar6);
  }
                    /* try { // try from 0567dc5c to 0577dcef has its CatchHandler @ 0567ccdc */
  lVar5 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02dcfd18();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    uVar1 = *(undefined4 *)(lVar5 + 0x24);
    lVar6 = *(long *)System_Collections_Generic_List<TMP_SpriteGlyph>_TypeInfo;
    lVar5 = *(long *)(lVar6 + 0x38);
    if (lVar5 == 0) {
      FUN_02dcfd74(lVar6);
      lVar5 = *(long *)(lVar6 + 0x38);
    }
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = *(long *)(lVar6 + 0x38);
    if (lVar5 == 0) {
      FUN_02dcfd74(lVar6);
      lVar5 = *(long *)(lVar6 + 0x38);
    }
    iVar3 = FUN_03885dec(uVar7,uVar1,*(undefined8 *)(lVar5 + 0x18));
    if (iVar3 < 0) {
      return;
    }
    lVar5 = *(long *)(*unaff_x23 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      if ((*(int *)(lVar5 + 0x24) == 1) && (uVar4 = FUN_056a09f4(0), (uVar4 & 1) == 0)) {
        return;
      }
      lVar5 = *(long *)(*unaff_x23 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02dcfd18();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02dcfd18();
      }
      if (*(long *)(*(long *)(lVar5 + 0xb8) + 8) != 0) {
        FUN_0567de10();
        lVar5 = *(long *)(*unaff_x23 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02dcfd18();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02dcfd18();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 != 0) {
          if (*(long *)(lVar5 + 0x1a8) == 0) {
            return;
          }
          lVar5 = *(long *)(*unaff_x23 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02dcfd18();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02dcfd18();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar5 != 0) {
            *unaff_x19 = *(undefined8 *)(lVar5 + 0x1a8);
            LeanTween__value();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


