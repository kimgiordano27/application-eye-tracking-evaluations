/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnAfterDeserialize
ENTRY_POINT: 0727e074
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 120
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;strong_file_logging_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__OnAfterDeserialize(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  unaff_x22[8] = unaff_x23;
  uVar1 = thunk_FUN_040ec700();
  lVar2 = FUN_07283670(uVar1,*(undefined8 *)PTR_DAT_0928cfa8,*(undefined8 *)(unaff_x19 + 0x28));
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_040b4e00(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
LAB_0727e420:
    uVar1 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar1,0);
  }
  if (5 < *(uint *)(unaff_x22 + 3)) {
    unaff_x22[9] = lVar2;
    uVar1 = thunk_FUN_040ec700(unaff_x22 + 9,lVar2);
    lVar2 = FUN_07283670(uVar1,*(undefined8 *)PTR_DAT_092c1788,*(undefined8 *)(unaff_x19 + 0x30));
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_040b4e00(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0))
    goto LAB_0727e420;
    if (6 < *(uint *)(unaff_x22 + 3)) {
      unaff_x22[10] = lVar2;
      uVar1 = thunk_FUN_040ec700(unaff_x22 + 10,lVar2);
      lVar2 = FUN_07283670(uVar1,*(undefined8 *)PTR_DAT_092c1790,*(undefined8 *)(unaff_x19 + 0x38));
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_040b4e00(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0))
      goto LAB_0727e420;
      if ((*(uint *)(unaff_x22 + 3) & 0xfffffff8) != 0) {
        unaff_x22[0xb] = lVar2;
        uVar1 = thunk_FUN_040ec700(unaff_x22 + 0xb,lVar2);
        lVar2 = FUN_07283670(uVar1,*(undefined8 *)PTR_DAT_092c1798,*(undefined8 *)(unaff_x19 + 0x40)
                            );
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_040b4e00(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0))
        goto LAB_0727e420;
        if (8 < *(uint *)(unaff_x22 + 3)) {
          unaff_x22[0xc] = lVar2;
          uVar1 = thunk_FUN_040ec700(unaff_x22 + 0xc,lVar2);
          lVar2 = FUN_07283670(uVar1,*(undefined8 *)PTR_DAT_092a5d10,
                               *(undefined8 *)(unaff_x19 + 0x48));
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_040b4e00(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0))
          goto LAB_0727e420;
          if (9 < *(uint *)(unaff_x22 + 3)) {
            unaff_x22[0xd] = lVar2;
            uVar1 = thunk_FUN_040ec700(unaff_x22 + 0xd,lVar2);
            lVar2 = FUN_07283670(uVar1,*(undefined8 *)PTR_DAT_092c1780,
                                 *(undefined8 *)(unaff_x19 + 0x50));
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_040b4e00(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0))
            goto LAB_0727e420;
            if (10 < *(uint *)(unaff_x22 + 3)) {
              unaff_x22[0xe] = lVar2;
              thunk_FUN_040ec700(unaff_x22 + 0xe,lVar2);
              lVar2 = *unaff_x29;
              if (*(int *)(lVar2 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar2 = *unaff_x29;
              }
              uVar4 = *(undefined8 *)(unaff_x19 + 0x58);
              uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
              uVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a8);
              FUN_0568af90();
              uVar1 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                (uVar4,uVar1,*(undefined8 *)PTR_DAT_092c1660);
              lVar2 = thunk_FUN_040b4efc(*unaff_x28);
              System_Xml_XmlReader__Close(lVar2,uVar5,uVar1,0);
              if ((lVar2 != 0) &&
                 (lVar3 = thunk_FUN_040b4e00(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0))
              goto LAB_0727e420;
              if (0xb < *(uint *)(unaff_x22 + 3)) {
                unaff_x22[0xf] = lVar2;
                thunk_FUN_040ec700(unaff_x22 + 0xf,lVar2);
                uVar4 = *(undefined8 *)(unaff_x19 + 0x60);
                uVar5 = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 8);
                uVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a0);
                FUN_0568af90();
                uVar1 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                  (uVar4,uVar1,*(undefined8 *)PTR_DAT_092c1658);
                lVar2 = thunk_FUN_040b4efc(*unaff_x28);
                System_Xml_XmlReader__Close(lVar2,uVar5,uVar1,0);
                if ((lVar2 != 0) &&
                   (lVar3 = thunk_FUN_040b4e00(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0
                   )) goto LAB_0727e420;
                if (0xc < *(uint *)(unaff_x22 + 3)) {
                  unaff_x22[0x10] = lVar2;
                  thunk_FUN_040ec700(unaff_x22 + 0x10,lVar2);
                  if (unaff_x21 != 0) {
                    thunk_FUN_07df3248();
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


