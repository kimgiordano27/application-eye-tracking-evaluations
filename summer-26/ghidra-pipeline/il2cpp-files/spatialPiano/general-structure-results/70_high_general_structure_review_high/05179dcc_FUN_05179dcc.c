/*
FUNCTION_NAME: FUN_05179dcc
ENTRY_POINT: 05179dcc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3
*/


void FUN_05179dcc(int *param_1)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  ushort local_64 [6];
  undefined4 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_06bba278 & 1) == 0) {
    FUN_02f08768(
                System_Collections_Generic_Dictionary<SerializableGuid,_SingleSaveAnchor_SaveRequest>_TypeInfo
                );
    FUN_02f08768(
                System_Collections_Generic_Dictionary<string,_IProperty<InlineStyleAccess>>_TypeInfo
                );
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05179d8c with catch @ 05179e0c
                        */
    FUN_02f08768(PTR_DAT_067d2ba8);
    FUN_02f08768(PTR_DAT_067d27f0);
    FUN_02f08768(PTR_DAT_067de180);
    FUN_02f08768(PTR_DAT_067de188);
                    /* try { // try from 05179e38 to 05279e3b has its CatchHandler @ 05179e98 */
                    /* try { // try from 05179e3c to 05279e87 has its CatchHandler @ 05179cd8 */
    FUN_02f08768(PTR_DAT_067de190);
    FUN_02f08768(PTR_DAT_067de1c8);
    DAT_06bba278 = 1;
  }
  puVar4 = PTR_DAT_067d27f0;
  iVar5 = *param_1;
  plVar12 = *(long **)(param_1 + 8);
  auVar14 = ZEXT816(0);
  local_40 = ZEXT816(0);
  auVar2 = ZEXT816(0);
  local_50 = ZEXT816(0);
  local_58 = 0;
  if (iVar5 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
    goto LAB_05179ed8;
  }
  if (iVar5 == 1) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
    goto FUN_0517a094;
  }
  if (iVar5 != 2) goto LAB_05179f10;
                    /* try { // try from 05179e88 to 05279e97 has its CatchHandler @ 05179e98 */
  local_50 = *(undefined1 (*) [16])(param_1 + 0x12);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = -1;
  local_40 = ZEXT816(0);
LAB_05179e9c:
  FUN_050080b0(local_50,0);
LAB_05179f10:
  do {
    puVar3 = PTR_DAT_067c9338;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar11 = plVar12[0x10];
joined_r0x05179f18:
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar10 = *(uint *)((long)plVar12 + 0x8c);
    if (*(uint *)(lVar11 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    uVar1 = *(ushort *)(lVar11 + (long)(int)uVar10 * 2 + 0x20);
    if (uVar1 < 0x2a) {
      if (uVar1 < 0xe) {
        if (uVar1 == 0) {
          if (*(uint *)(plVar12 + 0x11) != uVar10) goto LAB_05179fd4;
          lVar11 = FUN_0516a43c(plVar12,0,*(undefined8 *)(param_1 + 10),0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          auVar14 = FUN_0432af68(lVar11,0,*(undefined8 *)PTR_DAT_067de1c8);
          local_40 = auVar14;
          uVar6 = FUN_04712db8(local_40,*(undefined8 *)PTR_DAT_067de190);
          auVar2 = local_50;
          if ((uVar6 & 1) == 0) {
            lVar11 = *(long *)puVar4;
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 0xe) = local_40;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_0300be44(param_1 + 2,local_40,param_1,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<string,_IProperty<InlineStyleAccess>>_TypeInfo
                        );
            return;
          }
LAB_05179ed8:
          local_50 = auVar2;
          iVar5 = FUN_04712e00(local_40,*(undefined8 *)PTR_DAT_067de188);
          if (iVar5 == 0) {
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            uVar13 = 0;
            *(undefined4 *)((long)plVar12 + 0x24) = 0xc;
LAB_0517a100:
            puVar3 = PTR_DAT_067d2ba8;
            iVar5 = *(int *)(*(long *)puVar4 + 0xe4);
            *param_1 = -2;
            if (iVar5 == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_03d6ead8(param_1 + 2,uVar13,*(undefined8 *)puVar3);
            return;
          }
          goto LAB_05179f10;
        }
        if (uVar1 == 9) goto LAB_05179fd4;
        if (uVar1 != 10) {
          if (uVar1 != 0xd) goto LAB_05179fb0;
          lVar11 = FUN_0516a63c(plVar12,0,*(undefined8 *)(param_1 + 10),0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          auVar14 = FUN_05146c14(lVar11,0,0);
          local_50 = auVar14;
          uVar6 = FUN_05008098(local_50,0);
          if ((uVar6 & 1) == 0) {
            lVar11 = *(long *)puVar4;
            *param_1 = 2;
            *(undefined1 (*) [16])(param_1 + 0x12) = local_50;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            FUN_0300de34(param_1 + 2,local_50,param_1,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<SerializableGuid,_SingleSaveAnchor_SaveRequest>_TypeInfo
                        );
            return;
          }
          goto LAB_05179e9c;
        }
        FUN_0516f44c(plVar12,0);
      }
      else {
        if (uVar1 != 0x20) {
          if (uVar1 != 0x29) goto LAB_05179fb0;
          *(uint *)((long)plVar12 + 0x8c) = uVar10 + 1;
          FUN_05161d74(plVar12,0xf,0);
          goto FUN_0517a0fc;
        }
LAB_05179fd4:
        *(uint *)((long)plVar12 + 0x8c) = uVar10 + 1;
      }
      lVar11 = plVar12[0x10];
      goto joined_r0x05179f18;
    }
    if (0x2f < uVar1) {
      if (uVar1 == 0x5d) {
        *(uint *)((long)plVar12 + 0x8c) = uVar10 + 1;
        FUN_05161d74(plVar12,0xe,0);
        goto FUN_0517a0fc;
      }
      if (uVar1 == 0x7d) {
        *(uint *)((long)plVar12 + 0x8c) = uVar10 + 1;
        FUN_05161d74(plVar12,0xd,0);
        goto FUN_0517a0fc;
      }
LAB_05179fb0:
      if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar6 = FUN_05058a84(uVar1,0);
      if ((uVar6 & 1) != 0) {
        uVar10 = *(uint *)((long)plVar12 + 0x8c);
        goto LAB_05179fd4;
      }
      if (*(char *)((long)plVar12 + 0x71) == '\0') {
LAB_0517a290:
        lVar11 = thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar7 = FUN_050656a0(0);
        local_64[0] = uVar1;
        uVar8 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar3 + 0x88),local_64);
        uVar9 = thunk_FUN_02f6ef30(
                                  System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_TypeInfo
                                  );
        uVar7 = FUN_051b937c(uVar9,uVar7,uVar8,0);
        uVar7 = FUN_05160b1c(plVar12,uVar7,0);
        uVar8 = thunk_FUN_02f6ef30(
                                  System_Collections_Generic_Dictionary<string,_IProperty<ResolvedStyleAccess>>_TypeInfo
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar7,uVar8);
      }
      iVar5 = (**(code **)(*plVar12 + 0x268))(plVar12,*(undefined8 *)(*plVar12 + 0x270));
      if (iVar5 != 0) goto LAB_0517a290;
      FUN_05163d80(plVar12,0);
LAB_0517a0dc:
      uVar13 = 0;
      goto LAB_0517a100;
    }
    if (uVar1 == 0x2c) {
      *(uint *)((long)plVar12 + 0x8c) = uVar10 + 1;
      FUN_05163d80(plVar12,0);
      goto LAB_0517a0dc;
    }
    if (uVar1 != 0x2f) goto LAB_05179fb0;
    lVar11 = FUN_0516ab38(plVar12,(char)param_1[0xc] == '\0',*(undefined8 *)(param_1 + 10),0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    auVar14 = FUN_05146c14(lVar11,0,0);
    local_50 = auVar14;
    uVar6 = FUN_05008098(local_50,0);
    auVar14 = local_40;
    if ((uVar6 & 1) == 0) {
      lVar11 = *(long *)puVar4;
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x12) = local_50;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_0300de34(param_1 + 2,local_50,param_1,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<SerializableGuid,_SingleSaveAnchor_SaveRequest>_TypeInfo
                  );
      return;
    }
FUN_0517a094:
    local_40 = auVar14;
    FUN_050080b0(local_50,0);
    if ((char)param_1[0xc] == '\0') {
FUN_0517a0fc:
      uVar13 = 1;
      goto LAB_0517a100;
    }
  } while( true );
}


