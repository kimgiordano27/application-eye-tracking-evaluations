/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$ovrp_GetVirtualKeyboardTextureData
ENTRY_POINT: 090d51f8
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_83_0__ovrp_GetVirtualKeyboardTextureData(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int in_w10;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  *(int *)(unaff_x19 + 0x18) = in_w10 + 1;
  *(undefined8 *)(param_1 + 0x20) = unaff_x20;
  thunk_FUN_049ee3d8();
  uVar8 = FUN_04947fd0(*unaff_x22,4);
  FUN_08c82ec4(uVar8,*unaff_x23,0);
  lVar12 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  puVar2 = PTR_DAT_0ac798d8;
  if (lVar12 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
      *puVar9 = uVar8;
      thunk_FUN_049ee3d8(puVar9,uVar8);
    }
    else {
      FUN_06b7fe74();
    }
    uVar8 = FUN_04947fd0(*unaff_x22,4);
    FUN_08c82ec4(uVar8,*(undefined8 *)puVar2,0);
    lVar12 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    puVar2 = PTR_DAT_0ac798e0;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *puVar9 = uVar8;
        thunk_FUN_049ee3d8(puVar9,uVar8);
      }
      else {
        FUN_06b7fe74();
      }
      uVar8 = FUN_04947fd0(*unaff_x22,4);
      FUN_08c82ec4(uVar8,*(undefined8 *)puVar2,0);
      lVar12 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      puVar2 = PTR_DAT_0ac798e8;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
          puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *puVar9 = uVar8;
          thunk_FUN_049ee3d8(puVar9,uVar8);
        }
        else {
          FUN_06b7fe74();
        }
        uVar8 = FUN_04947fd0(*unaff_x22,5);
        FUN_08c82ec4(uVar8,*(undefined8 *)puVar2,0);
        lVar12 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        puVar7 = PTR_DAT_0ac79910;
        puVar6 = PTR_DAT_0ac79900;
        puVar5 = PTR_DAT_0ac798f0;
        puVar4 = PTR_DAT_0ac798b0;
        puVar3 = PTR_DAT_0ac798a8;
        puVar2 = PTR_DAT_0ac75870;
        if (lVar12 != 0) {
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
            puVar9 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
            *puVar9 = uVar8;
            thunk_FUN_049ee3d8(puVar9,uVar8);
          }
          else {
            FUN_06b7fe74();
          }
          **(long **)(*(long *)puVar2 + 0xb8) = unaff_x19;
          thunk_FUN_049ee3d8(*(undefined8 *)(*(long *)puVar2 + 0xb8));
          uVar8 = FUN_04947fd0(*(undefined8 *)puVar3,0x18);
          FUN_08c82ec4(uVar8,*(undefined8 *)puVar7,0);
          puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          *puVar9 = uVar8;
          thunk_FUN_049ee3d8(puVar9,uVar8);
          uVar8 = FUN_04947fd0(*unaff_x22,0x18);
          FUN_08c82ec4(uVar8,*(undefined8 *)puVar6,0);
          puVar9 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
          *puVar9 = uVar8;
          thunk_FUN_049ee3d8(puVar9,uVar8);
          lVar12 = FUN_04947fd0(*(undefined8 *)puVar4,0x18);
          uVar8 = FUN_04947fd0(*unaff_x22,6);
          FUN_08c82ec4(uVar8,*(undefined8 *)puVar5,0);
          if (lVar12 != 0) {
            if (*(int *)(lVar12 + 0x18) != 0) {
              *(undefined8 *)(lVar12 + 0x20) = uVar8;
              thunk_FUN_049ee3d8((undefined8 *)(lVar12 + 0x20),uVar8);
              uVar8 = FUN_04947fd0(*unaff_x22,0);
              if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar12 + 0x28) = uVar8;
                thunk_FUN_049ee3d8();
                lVar10 = FUN_04947fd0(*unaff_x22,1);
                if (lVar10 == 0) goto LAB_090d615c;
                if (*(int *)(lVar10 + 0x18) != 0) {
                  uVar1 = *(uint *)(lVar12 + 0x18);
                  *(undefined4 *)(lVar10 + 0x20) = 3;
                  if (2 < uVar1) {
                    *(long *)(lVar12 + 0x30) = lVar10;
                    thunk_FUN_049ee3d8();
                    lVar10 = FUN_04947fd0(*unaff_x22,1);
                    if (lVar10 == 0) goto LAB_090d615c;
                    if (*(int *)(lVar10 + 0x18) != 0) {
                      *(undefined4 *)(lVar10 + 0x20) = 4;
                      if ((*(uint *)(lVar12 + 0x18) & 0xfffffffc) != 0) {
                        *(long *)(lVar12 + 0x38) = lVar10;
                        thunk_FUN_049ee3d8();
                        lVar10 = FUN_04947fd0(*unaff_x22,1);
                        if (lVar10 == 0) goto LAB_090d615c;
                        if (*(int *)(lVar10 + 0x18) != 0) {
                          uVar1 = *(uint *)(lVar12 + 0x18);
                          *(undefined4 *)(lVar10 + 0x20) = 5;
                          if (4 < uVar1) {
                            *(long *)(lVar12 + 0x40) = lVar10;
                            thunk_FUN_049ee3d8();
                            lVar10 = FUN_04947fd0(*unaff_x22,1);
                            if (lVar10 == 0) goto LAB_090d615c;
                            if (*(int *)(lVar10 + 0x18) != 0) {
                              uVar1 = *(uint *)(lVar12 + 0x18);
                              *(undefined4 *)(lVar10 + 0x20) = 0x13;
                              if (5 < uVar1) {
                                *(long *)(lVar12 + 0x48) = lVar10;
                                thunk_FUN_049ee3d8();
                                lVar10 = FUN_04947fd0(*unaff_x22,1);
                                if (lVar10 == 0) goto LAB_090d615c;
                                if (*(int *)(lVar10 + 0x18) != 0) {
                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                  *(undefined4 *)(lVar10 + 0x20) = 7;
                                  if (6 < uVar1) {
                                    *(long *)(lVar12 + 0x50) = lVar10;
                                    thunk_FUN_049ee3d8();
                                    lVar10 = FUN_04947fd0(*unaff_x22,1);
                                    if (lVar10 == 0) goto LAB_090d615c;
                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                      *(undefined4 *)(lVar10 + 0x20) = 8;
                                      if ((*(uint *)(lVar12 + 0x18) & 0xfffffff8) != 0) {
                                        *(long *)(lVar12 + 0x58) = lVar10;
                                        thunk_FUN_049ee3d8();
                                        lVar10 = FUN_04947fd0(*unaff_x22,1);
                                        if (lVar10 == 0) goto LAB_090d615c;
                                        if (*(int *)(lVar10 + 0x18) != 0) {
                                          uVar1 = *(uint *)(lVar12 + 0x18);
                                          *(undefined4 *)(lVar10 + 0x20) = 0x14;
                                          if (8 < uVar1) {
                                            *(long *)(lVar12 + 0x60) = lVar10;
                                            thunk_FUN_049ee3d8();
                                            lVar10 = FUN_04947fd0(*unaff_x22,1);
                                            if (lVar10 == 0) goto LAB_090d615c;
                                            if (*(int *)(lVar10 + 0x18) != 0) {
                                              uVar1 = *(uint *)(lVar12 + 0x18);
                                              *(undefined4 *)(lVar10 + 0x20) = 10;
                                              if (9 < uVar1) {
                                                *(long *)(lVar12 + 0x68) = lVar10;
                                                thunk_FUN_049ee3d8();
                                                lVar10 = FUN_04947fd0(*unaff_x22,1);
                                                if (lVar10 == 0) goto LAB_090d615c;
                                                if (*(int *)(lVar10 + 0x18) != 0) {
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  *(undefined4 *)(lVar10 + 0x20) = 0xb;
                                                  if (10 < uVar1) {
                                                    *(long *)(lVar12 + 0x70) = lVar10;
                                                    thunk_FUN_049ee3d8();
                                                    lVar10 = FUN_04947fd0(*unaff_x22,1);
                                                    if (lVar10 == 0) goto LAB_090d615c;
                                                    if (*(int *)(lVar10 + 0x18) != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      *(undefined4 *)(lVar10 + 0x20) = 0x15;
                                                      if (0xb < uVar1) {
                                                        *(long *)(lVar12 + 0x78) = lVar10;
                                                        thunk_FUN_049ee3d8();
                                                        lVar10 = FUN_04947fd0(*unaff_x22,1);
                                                        if (lVar10 == 0) goto LAB_090d615c;
                                                        if (*(int *)(lVar10 + 0x18) != 0) {
                                                          uVar1 = *(uint *)(lVar12 + 0x18);
                                                          *(undefined4 *)(lVar10 + 0x20) = 0xd;
                                                          if (0xc < uVar1) {
                                                            *(long *)(lVar12 + 0x80) = lVar10;
                                                            thunk_FUN_049ee3d8();
                                                            lVar10 = FUN_04947fd0(*unaff_x22,1);
                                                            if (lVar10 == 0) goto LAB_090d615c;
                                                            if (*(int *)(lVar10 + 0x18) != 0) {
                                                              uVar1 = *(uint *)(lVar12 + 0x18);
                                                              *(undefined4 *)(lVar10 + 0x20) = 0xe;
                                                              if (0xd < uVar1) {
                                                                *(long *)(lVar12 + 0x88) = lVar10;
                                                                thunk_FUN_049ee3d8();
                                                                lVar10 = FUN_04947fd0(*unaff_x22,1);
                                                                if (lVar10 == 0) goto LAB_090d615c;
                                                                if (*(int *)(lVar10 + 0x18) != 0) {
                                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                                  *(undefined4 *)(lVar10 + 0x20) =
                                                                       0x16;
                                                                  if (0xe < uVar1) {
                                                                    *(long *)(lVar12 + 0x90) =
                                                                         lVar10;
                                                                    thunk_FUN_049ee3d8();
                                                                    lVar10 = FUN_04947fd0(*unaff_x22
                                                                                          ,1);
                                                                    if (lVar10 == 0)
                                                                    goto LAB_090d615c;
                                                                    if (*(int *)(lVar10 + 0x18) != 0
                                                                       ) {
                                                                      *(undefined4 *)(lVar10 + 0x20)
                                                                           = 0x10;
                                                                      if ((*(uint *)(lVar12 + 0x18)
                                                                          & 0xfffffff0) != 0) {
                                                                        *(long *)(lVar12 + 0x98) =
                                                                             lVar10;
                                                                        thunk_FUN_049ee3d8();
                                                                        lVar10 = FUN_04947fd0(*
                                                  unaff_x22,1);
                                                  if (lVar10 == 0) goto LAB_090d615c;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    *(undefined4 *)(lVar10 + 0x20) = 0x11;
                                                    if (0x10 < uVar1) {
                                                      *(long *)(lVar12 + 0xa0) = lVar10;
                                                      thunk_FUN_049ee3d8();
                                                      lVar10 = FUN_04947fd0(*unaff_x22,1);
                                                      if (lVar10 == 0) goto LAB_090d615c;
                                                      if (*(int *)(lVar10 + 0x18) != 0) {
                                                        uVar1 = *(uint *)(lVar12 + 0x18);
                                                        *(undefined4 *)(lVar10 + 0x20) = 0x12;
                                                        if (0x11 < uVar1) {
                                                          *(long *)(lVar12 + 0xa8) = lVar10;
                                                          thunk_FUN_049ee3d8();
                                                          lVar10 = FUN_04947fd0(*unaff_x22,1);
                                                          if (lVar10 == 0) goto LAB_090d615c;
                                                          if (*(int *)(lVar10 + 0x18) != 0) {
                                                            uVar1 = *(uint *)(lVar12 + 0x18);
                                                            *(undefined4 *)(lVar10 + 0x20) = 0x17;
                                                            if (0x12 < uVar1) {
                                                              *(long *)(lVar12 + 0xb0) = lVar10;
                                                              thunk_FUN_049ee3d8((long *)(lVar12 + 
                                                  0xb0));
                                                  uVar8 = FUN_04947fd0(*unaff_x22,0);
                                                  if (0x13 < *(uint *)(lVar12 + 0x18)) {
                                                    *(undefined8 *)(lVar12 + 0xb8) = uVar8;
                                                    thunk_FUN_049ee3d8((undefined8 *)(lVar12 + 0xb8)
                                                                       ,uVar8);
                                                    uVar8 = FUN_04947fd0(*unaff_x22,0);
                                                    if (0x14 < *(uint *)(lVar12 + 0x18)) {
                                                      *(undefined8 *)(lVar12 + 0xc0) = uVar8;
                                                      thunk_FUN_049ee3d8((undefined8 *)
                                                                         (lVar12 + 0xc0),uVar8);
                                                      uVar8 = FUN_04947fd0(*unaff_x22,0);
                                                      if (0x15 < *(uint *)(lVar12 + 0x18)) {
                                                        *(undefined8 *)(lVar12 + 200) = uVar8;
                                                        thunk_FUN_049ee3d8((undefined8 *)
                                                                           (lVar12 + 200),uVar8);
                                                        uVar8 = FUN_04947fd0(*unaff_x22,0);
                                                        if (0x16 < *(uint *)(lVar12 + 0x18)) {
                                                          *(undefined8 *)(lVar12 + 0xd0) = uVar8;
                                                          thunk_FUN_049ee3d8((undefined8 *)
                                                                             (lVar12 + 0xd0),uVar8);
                                                          uVar8 = FUN_04947fd0(*unaff_x22,0);
                                                          puVar4 = PTR_DAT_0ac798d0;
                                                          puVar3 = PTR_DAT_0ac798c8;
                                                          if (0x17 < *(uint *)(lVar12 + 0x18)) {
                                                            *(undefined8 *)(lVar12 + 0xd8) = uVar8;
                                                            thunk_FUN_049ee3d8();
                                                            plVar11 = (long *)(*(long *)(*(long *)
                                                  puVar2 + 0xb8) + 0x18);
                                                  *plVar11 = lVar12;
                                                  thunk_FUN_049ee3d8(plVar11,lVar12);
                                                  lVar12 = thunk_FUN_04983f60(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_06b13594(lVar12,*(undefined8 *)puVar3);
                                                  puVar3 = PTR_DAT_0ac798b8;
                                                  if (lVar12 != 0) {
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)PTR_DAT_0ac798b8;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        *(undefined4 *)
                                                         (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 6;
                                                        *(int *)(lVar12 + 0x1c) =
                                                             *(int *)(lVar12 + 0x1c) + 1;
                                                      }
                                                      else {
                                                        FUN_06b13e24(lVar12,6,*(undefined8 *)
                                                                               (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar12,7,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 8;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar12,8,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 9;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar12,9,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 10;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar12,10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar12,0xb,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar12,0xc,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar12,0xd,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar12,0xe,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar12,0xf,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar12,0x10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar12,0x11,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar12,0x12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                    lVar10 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar10 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar12,2,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar12,3,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_090d615c;
                                                  }
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 4;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar12,4,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 == 0) goto LAB_090d615c;
                                                  }
                                                  puVar3 = PTR_DAT_0ac79908;
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    *(undefined4 *)
                                                     (lVar10 + (long)(int)uVar1 * 4 + 0x20) = 5;
                                                  }
                                                  else {
                                                    FUN_06b13e24(lVar12,5,*(undefined8 *)
                                                                           (*(long *)(*(long *)(
                                                  lVar13 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  plVar11 = (long *)(*(long *)(*(long *)puVar2 +
                                                                              0xb8) + 0x20);
                                                  *plVar11 = lVar12;
                                                  thunk_FUN_049ee3d8(plVar11,lVar12);
                                                  uVar8 = FUN_04947fd0(*unaff_x22,5);
                                                  FUN_08c82ec4(uVar8,*(undefined8 *)puVar3,0);
                                                  puVar9 = (undefined8 *)
                                                           (*(long *)(*(long *)puVar2 + 0xb8) + 0x28
                                                           );
                                                  *puVar9 = uVar8;
                                                  thunk_FUN_049ee3d8(puVar9,uVar8);
                                                  return;
                                                  }
                                                  }
                                                  goto LAB_090d615c;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_04948194();
          }
        }
      }
    }
  }
LAB_090d615c:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


