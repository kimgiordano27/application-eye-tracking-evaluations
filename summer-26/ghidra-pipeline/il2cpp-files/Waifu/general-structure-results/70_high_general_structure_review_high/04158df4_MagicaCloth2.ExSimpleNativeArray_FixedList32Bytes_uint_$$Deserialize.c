/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<FixedList32Bytes<uint>>$$Deserialize
ENTRY_POINT: 04158df4
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_2
*/


undefined2 MagicaCloth2_ExSimpleNativeArray<FixedList32Bytes<uint>>__Deserialize(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  ulong uVar13;
  
  FUN_033b9870();
  plVar5 = (long *)FUN_0683eca4();
  uVar9 = DAT_083bc118;
  if (plVar5 == unaff_x21) {
    uVar4 = FUN_079a7298();
    plVar5 = (long *)FUN_03398188(DAT_083c7c90,(ulong)uVar4);
    if (0 < (int)uVar4) {
      uVar13 = 0;
      do {
        if (DAT_086ec618 == (code *)0x0) {
          DAT_086ec618 = (code *)FUN_033d1b68(
                                             "UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)"
                                             );
        }
        lVar6 = (*DAT_086ec618)();
        lVar7 = FUN_079a4038(lVar6,0);
        if (plVar5 == (long *)0x0)
        goto MagicaCloth2_ExSimpleNativeArray<FixedList64Bytes<short>>__AddRange;
        if (*(uint *)(plVar5 + 3) <= uVar13) goto LAB_04159194;
        plVar12 = plVar5 + uVar13 + 4;
        *plVar12 = lVar7;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (lVar6 != 0) {
          if (DAT_086ec1b0 == (code *)0x0) {
            DAT_086ec1b0 = (code *)FUN_033d1b68(
                                               "UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)"
                                               );
          }
          (*DAT_086ec1b0)(lVar6);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar4);
    }
  }
  else {
    if (*(int *)(*(long *)(unaff_x23 + 0x3b8) + 0xe0) == 0) {
      FUN_033b9870();
    }
    plVar5 = (long *)FUN_0683eca4(uVar9,0);
    if (plVar5 != unaff_x21) {
      uVar9 = FUN_0335b6c8(&DAT_0843eb18,1);
      uVar10 = (**(code **)(*unaff_x21 + 0x168))();
      uVar11 = FUN_033d1ba8(&DAT_0842f4a8);
      uVar9 = FUN_0666ec64(uVar9,uVar10,uVar11,0);
      FUN_033d1ba8(&DAT_083cb470);
      uVar10 = thunk_FUN_03398a84();
      FUN_06869f9c(uVar10,uVar9,0);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar10,unaff_x19);
    }
    uVar4 = FUN_079a7298();
    plVar5 = (long *)FUN_03398188(DAT_083c72f8,(ulong)uVar4);
    if (0 < (int)uVar4) {
      uVar13 = 0;
      do {
        if (DAT_086ec618 == (code *)0x0) {
          DAT_086ec618 = (code *)FUN_033d1b68(
                                             "UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)"
                                             );
        }
        lVar6 = (*DAT_086ec618)();
        lVar7 = FUN_03398a84(DAT_083c8828);
        FUN_079aa6b0(lVar7,lVar6,0);
        if (plVar5 == (long *)0x0)
        goto MagicaCloth2_ExSimpleNativeArray<FixedList64Bytes<short>>__AddRange;
        if ((lVar7 != 0) &&
           (lVar8 = FUN_0339898c(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0)) {
          uVar9 = FUN_033d1d78();
                    /* WARNING: Subroutine does not return */
          FUN_033d1c20(uVar9,0);
        }
        if (*(uint *)(plVar5 + 3) <= uVar13) {
LAB_04159194:
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        plVar12 = plVar5 + uVar13 + 4;
        *plVar12 = lVar7;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar12 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (lVar6 != 0) {
          if (DAT_086ec1b0 == (code *)0x0) {
            DAT_086ec1b0 = (code *)FUN_033d1b68(
                                               "UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)"
                                               );
          }
          (*DAT_086ec1b0)(lVar6);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar4);
    }
  }
  lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0338f618(lVar6);
  }
  if (plVar5 != (long *)0x0) {
    if (*(long *)(*plVar5 + 0x40) != *(long *)(lVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1fec(plVar5);
    }
    return (short)plVar5[2];
  }
MagicaCloth2_ExSimpleNativeArray<FixedList64Bytes<short>>__AddRange:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


