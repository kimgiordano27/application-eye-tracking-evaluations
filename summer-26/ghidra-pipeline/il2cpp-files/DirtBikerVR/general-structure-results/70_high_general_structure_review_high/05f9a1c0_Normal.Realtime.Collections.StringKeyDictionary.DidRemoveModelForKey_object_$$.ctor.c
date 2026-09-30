/*
FUNCTION_NAME: Normal.Realtime.Collections.StringKeyDictionary.DidRemoveModelForKey<object>$$.ctor
ENTRY_POINT: 05f9a1c0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_6
*/


undefined8
Normal_Realtime_Collections_StringKeyDictionary_DidRemoveModelForKey<object>___ctor(uint param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint unaff_w19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined4 unaff_w23;
  int iVar9;
  long *unaff_x24;
  uint uVar10;
  undefined8 uVar11;
  long unaff_x26;
  uint uVar12;
  int *piVar13;
  uint uStack000000000000000c;
  undefined4 uStack000000000000001c;
  
  lVar5 = *(long *)(unaff_x21 + 0x10);
  if (lVar5 == 0)
  goto 
  Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
  ;
  uVar12 = *(uint *)(lVar5 + 0x18);
  param_1 = param_1 & 0x7fffffff;
  iVar9 = 0;
  if (uVar12 != 0) {
    iVar9 = (int)param_1 / (int)uVar12;
  }
  uVar10 = param_1 - iVar9 * uVar12;
  if (uVar12 <= uVar10) {
LAB_05f9a52c:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
  piVar13 = (int *)(lVar5 + (ulong)uVar10 * 4 + 0x20);
  uVar12 = *piVar13 - 1;
  uStack000000000000000c = unaff_w19;
  uStack000000000000001c = unaff_w23;
  if (unaff_x24 == (long *)0x0) {
    plVar3 = (long *)FUN_04036464(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x18));
    if (unaff_x26 == 0)
    goto 
    Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
    ;
    uVar11 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar10 = (uint)uVar11;
    if (uVar12 < uVar10) {
      lVar5 = unaff_x26 + 0x20;
      iVar9 = 0;
      do {
        uVar10 = (uint)uVar11;
        if (*(uint *)(lVar5 + (long)(int)uVar12 * 0x18) == param_1) {
          if (plVar3 == (long *)0x0)
          goto 
          Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
          ;
          uVar7 = (**(code **)(*plVar3 + 0x1b8))
                            (plVar3,*(undefined8 *)(lVar5 + (long)(int)uVar12 * 0x18 + 8));
          if ((uVar7 & 1) != 0) {
            if ((uStack000000000000000c & 0xff) == 2) goto LAB_05f9a518;
            if ((uStack000000000000000c & 0xff) != 1) {
              return 0;
            }
            if (*(uint *)(unaff_x26 + 0x18) <= uVar12) goto LAB_05f9a52c;
            lVar5 = lVar5 + (long)(int)uVar12 * 0x18;
            goto LAB_05f9a50c;
          }
          uVar10 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar10 <= uVar12) goto LAB_05f9a52c;
        uVar12 = *(uint *)(lVar5 + (long)(int)uVar12 * 0x18 + 4);
        if ((int)uVar10 <= iVar9) {
          FUN_067723dc(0);
        }
        uVar11 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar9 = iVar9 + 1;
        uVar10 = (uint)uVar11;
        unaff_w23 = uStack000000000000001c;
      } while (uVar12 < uVar10);
    }
  }
  else {
    if (unaff_x26 == 0)
    goto 
    Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
    ;
    uVar11 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar10 = (uint)uVar11;
    if (uVar12 < uVar10) {
      lVar5 = unaff_x26 + 0x20;
      iVar9 = 0;
      do {
        uVar10 = (uint)uVar11;
        if (*(uint *)(lVar5 + (long)(int)uVar12 * 0x18) == param_1) {
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03ac4090(lVar4);
          }
          lVar6 = *unaff_x24;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar4) {
                puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_05f9a2a4;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar2 = (undefined8 *)FUN_03ac43c4();
LAB_05f9a2a4:
          uVar7 = (*(code *)*puVar2)();
          if ((uVar7 & 1) != 0) {
            if ((uStack000000000000000c & 0xff) == 2) {
LAB_05f9a518:
              FUN_067722d8();
              return 0;
            }
            if ((uStack000000000000000c & 0xff) != 1) {
              return 0;
            }
            if (uVar12 < *(uint *)(unaff_x26 + 0x18)) {
              lVar5 = lVar5 + (long)(int)uVar12 * 0x18;
LAB_05f9a50c:
              *(undefined4 *)(lVar5 + 0x10) = uStack000000000000001c;
              return 1;
            }
            goto LAB_05f9a52c;
          }
          uVar10 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar10 <= uVar12) goto LAB_05f9a52c;
        uVar12 = *(uint *)(lVar5 + (long)(int)uVar12 * 0x18 + 4);
        if ((int)uVar10 <= iVar9) {
          FUN_067723dc(0);
        }
        uVar11 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar9 = iVar9 + 1;
        uVar10 = (uint)uVar11;
        unaff_w23 = uStack000000000000001c;
      } while (uVar12 < uVar10);
    }
  }
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar12 = *(uint *)(unaff_x21 + 0x20);
    if (uVar12 == uVar10) {
      FUN_05f9a8f8();
      lVar4 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar10 + 1;
      if (lVar4 == 0)
      goto 
      Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
      ;
      uVar10 = *(uint *)(lVar4 + 0x18);
      iVar9 = 0;
      if (uVar10 != 0) {
        iVar9 = (int)param_1 / (int)uVar10;
      }
      uVar1 = param_1 - iVar9 * uVar10;
      if (uVar10 <= uVar1) goto LAB_05f9a52c;
      lVar5 = *(long *)(unaff_x21 + 0x18);
      piVar13 = (int *)(lVar4 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar5 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar12 + 1;
    }
    if (lVar5 == 0) {
Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
      :
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_05f9a52c;
    lVar5 = lVar5 + (long)(int)uVar12 * 0x18;
  }
  else {
    uVar12 = *(uint *)(unaff_x21 + 0x24);
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    if (uVar10 <= uVar12) goto LAB_05f9a52c;
    lVar5 = unaff_x26 + (long)(int)uVar12 * 0x18;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(lVar5 + 0x24);
  }
  *(uint *)(lVar5 + 0x20) = param_1;
  iVar9 = *piVar13;
  *(undefined8 *)(lVar5 + 0x28) = unaff_x20;
  *(int *)(lVar5 + 0x24) = iVar9 + -1;
  thunk_FUN_03afed3c();
  *(undefined4 *)(lVar5 + 0x30) = unaff_w23;
  *piVar13 = uVar12 + 1;
  return 1;
}


