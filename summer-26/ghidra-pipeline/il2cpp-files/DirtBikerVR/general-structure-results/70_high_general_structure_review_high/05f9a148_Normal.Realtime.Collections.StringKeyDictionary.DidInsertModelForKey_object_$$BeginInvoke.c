/*
FUNCTION_NAME: Normal.Realtime.Collections.StringKeyDictionary.DidInsertModelForKey<object>$$BeginInvoke
ENTRY_POINT: 05f9a148
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_8
*/


undefined8
Normal_Realtime_Collections_StringKeyDictionary_DidInsertModelForKey<object>__BeginInvoke
          (long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint unaff_w19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined4 unaff_w23;
  int iVar10;
  long *unaff_x24;
  uint uVar11;
  undefined8 uVar12;
  long unaff_x26;
  uint uVar13;
  int *piVar14;
  uint uStack000000000000000c;
  undefined4 uStack000000000000001c;
  
  lVar6 = *unaff_x24;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == param_1) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_05f9a1b0;
      }
      uVar8 = uVar8 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_03ac43c4();
LAB_05f9a1b0:
  uVar2 = (*(code *)*puVar3)();
  lVar6 = *(long *)(unaff_x21 + 0x10);
  if (lVar6 == 0)
  goto 
  Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
  ;
  uVar13 = *(uint *)(lVar6 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar10 = 0;
  if (uVar13 != 0) {
    iVar10 = (int)uVar2 / (int)uVar13;
  }
  uVar11 = uVar2 - iVar10 * uVar13;
  if (uVar13 <= uVar11) {
LAB_05f9a52c:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
  piVar14 = (int *)(lVar6 + (ulong)uVar11 * 4 + 0x20);
  uVar13 = *piVar14 - 1;
  uStack000000000000000c = unaff_w19;
  uStack000000000000001c = unaff_w23;
  if (unaff_x24 == (long *)0x0) {
    plVar4 = (long *)FUN_04036464(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x18));
    if (unaff_x26 == 0)
    goto 
    Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
    ;
    uVar12 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar11 = (uint)uVar12;
    if (uVar13 < uVar11) {
      lVar6 = unaff_x26 + 0x20;
      iVar10 = 0;
      do {
        uVar11 = (uint)uVar12;
        if (*(uint *)(lVar6 + (long)(int)uVar13 * 0x18) == uVar2) {
          if (plVar4 == (long *)0x0)
          goto 
          Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
          ;
          uVar8 = (**(code **)(*plVar4 + 0x1b8))
                            (plVar4,*(undefined8 *)(lVar6 + (long)(int)uVar13 * 0x18 + 8));
          if ((uVar8 & 1) != 0) {
            if ((uStack000000000000000c & 0xff) == 2) goto LAB_05f9a518;
            if ((uStack000000000000000c & 0xff) != 1) {
              return 0;
            }
            if (*(uint *)(unaff_x26 + 0x18) <= uVar13) goto LAB_05f9a52c;
            lVar6 = lVar6 + (long)(int)uVar13 * 0x18;
            goto LAB_05f9a50c;
          }
          uVar11 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar11 <= uVar13) goto LAB_05f9a52c;
        uVar13 = *(uint *)(lVar6 + (long)(int)uVar13 * 0x18 + 4);
        if ((int)uVar11 <= iVar10) {
          FUN_067723dc(0);
        }
        uVar12 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar10 = iVar10 + 1;
        uVar11 = (uint)uVar12;
        unaff_w23 = uStack000000000000001c;
      } while (uVar13 < uVar11);
    }
  }
  else {
    if (unaff_x26 == 0)
    goto 
    Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
    ;
    uVar12 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar11 = (uint)uVar12;
    if (uVar13 < uVar11) {
      lVar6 = unaff_x26 + 0x20;
      iVar10 = 0;
      do {
        uVar11 = (uint)uVar12;
        if (*(uint *)(lVar6 + (long)(int)uVar13 * 0x18) == uVar2) {
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03ac4090(lVar5);
          }
          lVar7 = *unaff_x24;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_05f9a2a4;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_03ac43c4();
LAB_05f9a2a4:
          uVar8 = (*(code *)*puVar3)();
          if ((uVar8 & 1) != 0) {
            if ((uStack000000000000000c & 0xff) == 2) {
LAB_05f9a518:
              FUN_067722d8();
              return 0;
            }
            if ((uStack000000000000000c & 0xff) != 1) {
              return 0;
            }
            if (uVar13 < *(uint *)(unaff_x26 + 0x18)) {
              lVar6 = lVar6 + (long)(int)uVar13 * 0x18;
LAB_05f9a50c:
              *(undefined4 *)(lVar6 + 0x10) = uStack000000000000001c;
              return 1;
            }
            goto LAB_05f9a52c;
          }
          uVar11 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar11 <= uVar13) goto LAB_05f9a52c;
        uVar13 = *(uint *)(lVar6 + (long)(int)uVar13 * 0x18 + 4);
        if ((int)uVar11 <= iVar10) {
          FUN_067723dc(0);
        }
        uVar12 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar10 = iVar10 + 1;
        uVar11 = (uint)uVar12;
        unaff_w23 = uStack000000000000001c;
      } while (uVar13 < uVar11);
    }
  }
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar13 = *(uint *)(unaff_x21 + 0x20);
    if (uVar13 == uVar11) {
      FUN_05f9a8f8();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar11 + 1;
      if (lVar5 == 0)
      goto 
      Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
      ;
      uVar11 = *(uint *)(lVar5 + 0x18);
      iVar10 = 0;
      if (uVar11 != 0) {
        iVar10 = (int)uVar2 / (int)uVar11;
      }
      uVar1 = uVar2 - iVar10 * uVar11;
      if (uVar11 <= uVar1) goto LAB_05f9a52c;
      lVar6 = *(long *)(unaff_x21 + 0x18);
      piVar14 = (int *)(lVar5 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar6 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar13 + 1;
    }
    if (lVar6 == 0) {
Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
      :
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar13) goto LAB_05f9a52c;
    lVar6 = lVar6 + (long)(int)uVar13 * 0x18;
  }
  else {
    uVar13 = *(uint *)(unaff_x21 + 0x24);
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    if (uVar11 <= uVar13) goto LAB_05f9a52c;
    lVar6 = unaff_x26 + (long)(int)uVar13 * 0x18;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(lVar6 + 0x24);
  }
  *(uint *)(lVar6 + 0x20) = uVar2;
  iVar10 = *piVar14;
  *(undefined8 *)(lVar6 + 0x28) = unaff_x20;
  *(int *)(lVar6 + 0x24) = iVar10 + -1;
  thunk_FUN_03afed3c();
  *(undefined4 *)(lVar6 + 0x30) = unaff_w23;
  *piVar14 = uVar13 + 1;
  return 1;
}


