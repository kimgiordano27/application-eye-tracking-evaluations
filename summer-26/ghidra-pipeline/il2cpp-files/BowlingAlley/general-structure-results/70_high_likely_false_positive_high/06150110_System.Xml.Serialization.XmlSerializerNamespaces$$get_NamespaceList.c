/*
FUNCTION_NAME: System.Xml.Serialization.XmlSerializerNamespaces$$get_NamespaceList
ENTRY_POINT: 06150110
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Xml_Serialization_XmlSerializerNamespaces__get_NamespaceList(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  long *in_stack_00000018;
  
                    /* catch() { ... } // from try @ 0614f10c with catch @ 06150110 */
                    /* catch() { ... } // from try @ 0614ef38 with catch @ 06150114 */
  if (*(int *)(param_1 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 0614ee94 with catch @ 06150118 */
    thunk_FUN_032cd7c0();
  }
                    /* catch() { ... } // from try @ 0614ee3c with catch @ 0615011c */
                    /* catch() { ... } // from try @ 0614ed60 with catch @ 06150120 */
                    /* catch() { ... } // from try @ 0614ece4 with catch @ 06150124 */
  lVar13 = FUN_06292748(0x20,0);
                    /* catch() { ... } // from try @ 0614ec90 with catch @ 06150128 */
                    /* catch() { ... } // from try @ 0614f884 with catch @ 0615012c */
                    /* catch() { ... } // from try @ 0614f814 with catch @ 06150130 */
  if ((lVar13 != 0) && (plVar18 = *(long **)(lVar13 + 0x68), plVar18 != (long *)0x0)) {
                    /* catch() { ... } // from try @ 0614f788 with catch @ 06150134 */
                    /* catch() { ... } // from try @ 0614f704 with catch @ 06150138 */
                    /* catch() { ... } // from try @ 0614f654 with catch @ 0615013c */
                    /* catch() { ... } // from try @ 0614f5d0 with catch @ 06150140 */
                    /* catch() { ... } // from try @ 0614f520 with catch @ 06150144 */
                    /* catch() { ... } // from try @ 0614f470 with catch @ 06150148 */
                    /* catch() { ... } // from try @ 0614f418 with catch @ 0615014c */
                    /* catch() { ... } // from try @ 0614f360 with catch @ 06150150 */
                    /* catch() { ... } // from try @ 0614f158 with catch @ 06150154 */
    plVar14 = (long *)(**(code **)(*plVar18 + 0x238))
                                (plVar18,*unaff_x22,0,0,&stack0x00000018,
                                 *(undefined8 *)(*plVar18 + 0x240));
                    /* catch() { ... } // from try @ 0614f0dc with catch @ 06150158 */
    if (plVar14 == (long *)0x0) {
                    /* catch() { ... } // from try @ 0614e670 with catch @ 06150240 */
                    /* catch() { ... } // from try @ 0614e39c with catch @ 06150244 */
                    /* catch() { ... } // from try @ 0614ea80 with catch @ 06150248 */
                    /* catch() { ... } // from try @ 0614e944 with catch @ 0615024c */
                    /* catch() { ... } // from try @ 0614b9f8 with catch @ 06150250 */
                    /* catch() { ... } // from try @ 0614e660 with catch @ 06150254 */
                    /* catch() { ... } // from try @ 0614e4cc with catch @ 06150258 */
                    /* catch() { ... } // from try @ 0614e1fc with catch @ 0615025c */
      if ((in_stack_00000018 != (long *)0x0) && (*in_stack_00000018 != *(long *)PTR_DAT_072794f8)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(in_stack_00000018,*(long *)PTR_DAT_072794f8);
      }
                    /* catch() { ... } // from try @ 0614ec10 with catch @ 06150260 */
                    /* catch() { ... } // from try @ 0614ea5c with catch @ 06150264 */
      *unaff_x22 = in_stack_00000018;
                    /* catch() { ... } // from try @ 0614e920 with catch @ 06150268 */
      thunk_FUN_0333a630();
    }
    else {
                    /* catch() { ... } // from try @ 0614ef9c with catch @ 0615015c */
                    /* catch() { ... } // from try @ 0614ef2c with catch @ 06150160 */
                    /* catch() { ... } // from try @ 0614ee88 with catch @ 06150164 */
                    /* catch() { ... } // from try @ 0614ee2c with catch @ 06150168 */
                    /* catch() { ... } // from try @ 0614eda8 with catch @ 0615016c */
                    /* catch() { ... } // from try @ 0614ed48 with catch @ 06150170 */
      lVar13 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072794b0,4);
                    /* catch() { ... } // from try @ 0614ecd8 with catch @ 06150174 */
      if (lVar13 == 0) goto LAB_061509d0;
                    /* catch() { ... } // from try @ 0614ec78 with catch @ 06150178 */
                    /* catch() { ... } // from try @ 0614f6f0 with catch @ 0615017c */
                    /* catch() { ... } // from try @ 0614f640 with catch @ 06150180 */
      if (*(int *)(lVar13 + 0x18) == 0) {
LAB_06151108:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
                    /* catch() { ... } // from try @ 0614f5bc with catch @ 06150184 */
                    /* catch() { ... } // from try @ 0614f50c with catch @ 06150188 */
                    /* catch() { ... } // from try @ 0614f45c with catch @ 0615018c */
                    /* catch() { ... } // from try @ 0614f34c with catch @ 06150190 */
                    /* catch() { ... } // from try @ 0614ef88 with catch @ 06150194 */
      *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)PTR_DAT_07287ad0;
                    /* catch() { ... } // from try @ 0614ef18 with catch @ 06150198 */
                    /* catch() { ... } // from try @ 0614ee70 with catch @ 0615019c */
      thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x20));
                    /* catch() { ... } // from try @ 0614ed94 with catch @ 061501a0 */
                    /* catch() { ... } // from try @ 0614ecc4 with catch @ 061501a4 */
                    /* catch() { ... } // from try @ 0614f858 with catch @ 061501a8 */
      if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_06151108;
                    /* catch() { ... } // from try @ 0614f7d4 with catch @ 061501ac */
                    /* catch() { ... } // from try @ 0614f75c with catch @ 061501b0 */
                    /* catch() { ... } // from try @ 0614f3e8 with catch @ 061501b4 */
      *(undefined8 *)(lVar13 + 0x28) = *unaff_x22;
                    /* catch() { ... } // from try @ 0614f12c with catch @ 061501b8 */
                    /* catch() { ... } // from try @ 0614f084 with catch @ 061501bc */
      thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x28));
                    /* catch() { ... } // from try @ 0614edfc with catch @ 061501c0 */
                    /* catch() { ... } // from try @ 0614ed20 with catch @ 061501c4 */
                    /* catch() { ... } // from try @ 0614ec50 with catch @ 061501c8 */
      uVar15 = FUN_0619fb34(plVar18,0);
                    /* catch() { ... } // from try @ 0614f844 with catch @ 061501cc */
                    /* catch() { ... } // from try @ 0614f7bc with catch @ 061501d0 */
      if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_06151108;
                    /* catch() { ... } // from try @ 0614f748 with catch @ 061501d8 */
                    /* catch() { ... } // from try @ 0614f3d8 with catch @ 061501dc */
      *(undefined8 *)(lVar13 + 0x30) = uVar15;
                    /* catch() { ... } // from try @ 0614f118 with catch @ 061501e0 */
                    /* catch() { ... } // from try @ 0614f064 with catch @ 061501e4 */
                    /* catch() { ... } // from try @ 0614edec with catch @ 061501e8 */
      thunk_FUN_0333a630((undefined8 *)(lVar13 + 0x30),uVar15);
                    /* catch() { ... } // from try @ 0614ed10 with catch @ 061501ec */
                    /* catch() { ... } // from try @ 0614ec40 with catch @ 061501f0 */
                    /* catch() { ... } // from try @ 0614ec34 with catch @ 061501f4 */
                    /* catch() { ... } // from try @ 0614ec20 with catch @ 061501f8 */
      uVar15 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
                    /* catch() { ... } // from try @ 0614eab8 with catch @ 061501fc */
                    /* catch() { ... } // from try @ 0614e97c with catch @ 06150200 */
                    /* catch() { ... } // from try @ 0614ba30 with catch @ 06150204 */
      if (*(uint *)(lVar13 + 0x18) < 4) goto LAB_06151108;
                    /* catch() { ... } // from try @ 0614e698 with catch @ 06150208 */
                    /* catch() { ... } // from try @ 0614e114 with catch @ 0615020c */
                    /* catch() { ... } // from try @ 0614ea9c with catch @ 06150210 */
      *(undefined8 *)(lVar13 + 0x38) = uVar15;
                    /* catch() { ... } // from try @ 0614e960 with catch @ 06150214 */
      thunk_FUN_0333a630();
                    /* catch() { ... } // from try @ 0614ba14 with catch @ 06150218 */
                    /* catch() { ... } // from try @ 0614e67c with catch @ 0615021c */
                    /* catch() { ... } // from try @ 0614e458 with catch @ 06150220 */
                    /* catch() { ... } // from try @ 0614e3c0 with catch @ 06150224 */
                    /* catch() { ... } // from try @ 0614ebb0 with catch @ 06150228 */
                    /* catch() { ... } // from try @ 0614eb30 with catch @ 0615022c */
                    /* catch() { ... } // from try @ 0614ea90 with catch @ 06150230 */
                    /* catch() { ... } // from try @ 0614ea08 with catch @ 06150234 */
                    /* catch() { ... } // from try @ 0614e954 with catch @ 06150238 */
      FUN_062811d0();
                    /* catch() { ... } // from try @ 0614ba08 with catch @ 0615023c */
    }
                    /* catch() { ... } // from try @ 0614b9d4 with catch @ 0615026c */
                    /* catch() { ... } // from try @ 0614e8d0 with catch @ 06150270 */
    FUN_06151ca8();
    puVar5 = System_Func<TransitionStartEvent>_TypeInfo;
                    /* catch() { ... } // from try @ 0614e818 with catch @ 06150274 */
    lVar13 = *(long *)(unaff_x19 + 0x58);
                    /* catch() { ... } // from try @ 0614e63c with catch @ 06150278 */
    if (lVar13 != 0) {
                    /* catch() { ... } // from try @ 0614e5e8 with catch @ 0615027c */
      puVar1 = (undefined8 *)(unaff_x20 + 0xa8);
                    /* catch() { ... } // from try @ 0614e588 with catch @ 06150280 */
                    /* catch() { ... } // from try @ 0614e528 with catch @ 06150284 */
                    /* catch() { ... } // from try @ 0614e4ac with catch @ 06150288 */
                    /* catch() { ... } // from try @ 0614e370 with catch @ 0615028c */
                    /* catch() { ... } // from try @ 0614e26c with catch @ 06150290 */
                    /* catch() { ... } // from try @ 0614e1dc with catch @ 06150294 */
      iVar12 = 0;
                    /* catch() { ... } // from try @ 0614e188 with catch @ 06150298 */
                    /* catch() { ... } // from try @ 0614ebf8 with catch @ 0615029c */
                    /* catch() { ... } // from try @ 0614eb74 with catch @ 061502a0 */
                    /* catch() { ... } // from try @ 0614eb00 with catch @ 061502a4 */
                    /* catch() { ... } // from try @ 0614ea50 with catch @ 061502a8 */
      while (iVar10 = FUN_058f278c(lVar13,0), iVar12 < iVar10) {
                    /* catch() { ... } // from try @ 0614e9c4 with catch @ 061502ac */
        plVar18 = *(long **)(unaff_x19 + 0x58);
                    /* catch() { ... } // from try @ 0614e914 with catch @ 061502b0 */
                    /* catch() { ... } // from try @ 0614b9c8 with catch @ 061502b4 */
                    /* catch() { ... } // from try @ 0614e8a0 with catch @ 061502b8 */
                    /* catch() { ... } // from try @ 0614e7f4 with catch @ 061502bc */
                    /* catch() { ... } // from try @ 0614e630 with catch @ 061502c0 */
                    /* catch() { ... } // from try @ 0614e5d0 with catch @ 061502c4 */
                    /* catch() { ... } // from try @ 0614e578 with catch @ 061502c8 */
        if ((plVar18 == (long *)0x0) ||
           (plVar18 = (long *)(**(code **)(*plVar18 + 0x308))
                                        (plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310)),
           plVar18 == (long *)0x0)) goto LAB_061509d0;
                    /* catch() { ... } // from try @ 0614e518 with catch @ 061502cc */
                    /* catch() { ... } // from try @ 0614e4a0 with catch @ 061502d0 */
        lVar13 = *(long *)puVar5;
                    /* catch() { ... } // from try @ 0614e408 with catch @ 061502d4 */
                    /* catch() { ... } // from try @ 0614e364 with catch @ 061502d8 */
                    /* catch() { ... } // from try @ 0614e248 with catch @ 061502dc */
        bVar3 = *(byte *)(lVar13 + 0x130);
                    /* catch() { ... } // from try @ 0614e1d0 with catch @ 061502e0 */
                    /* catch() { ... } // from try @ 0614e164 with catch @ 061502e4 */
                    /* catch() { ... } // from try @ 0614eb60 with catch @ 061502e8 */
                    /* catch() { ... } // from try @ 0614eaec with catch @ 061502ec */
                    /* catch() { ... } // from try @ 0614ea3c with catch @ 061502f0 */
                    /* catch() { ... } // from try @ 0614e9b0 with catch @ 061502f4 */
                    /* catch() { ... } // from try @ 0614e900 with catch @ 061502f8 */
        if ((*(byte *)(*plVar18 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar3 * 8 + -8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar18);
        }
        plVar14 = plVar18 + 9;
                    /* catch() { ... } // from try @ 0614b9b4 with catch @ 061502fc */
                    /* catch() { ... } // from try @ 0614e61c with catch @ 06150300 */
        lVar13 = *plVar14;
                    /* catch() { ... } // from try @ 0614e48c with catch @ 06150304 */
                    /* catch() { ... } // from try @ 0614e3f4 with catch @ 06150308 */
        plVar18[5] = unaff_x19;
                    /* catch() { ... } // from try @ 0614e34c with catch @ 0615030c */
                    /* catch() { ... } // from try @ 0614e1bc with catch @ 06150310 */
        thunk_FUN_0333a630();
                    /* catch() { ... } // from try @ 0614ebd0 with catch @ 06150314 */
                    /* catch() { ... } // from try @ 0614e848 with catch @ 06150318 */
                    /* catch() { ... } // from try @ 0614e7c8 with catch @ 0615031c */
        uVar15 = FUN_06152840();
                    /* catch() { ... } // from try @ 0614e5a8 with catch @ 06150320 */
                    /* catch() { ... } // from try @ 0614e548 with catch @ 06150324 */
        if (plVar18[7] == 0) {
                    /* catch() { ... } // from try @ 0614e7b4 with catch @ 0615033c */
                    /* catch() { ... } // from try @ 0614e598 with catch @ 06150340 */
                    /* catch() { ... } // from try @ 0614e538 with catch @ 06150344 */
          if ((int)plVar18[0xc] == 1) {
                    /* catch() { ... } // from try @ 0614e4d8 with catch @ 06150348 */
            if (lVar13 == 0) {
LAB_0615035c:
                    /* catch() { ... } // from try @ 0614df0c with catch @ 0615035c */
                    /* catch() { ... } // from try @ 0614de58 with catch @ 06150360 */
                    /* catch() { ... } // from try @ 0614dcb0 with catch @ 06150364 */
                    /* catch() { ... } // from try @ 0614b958 with catch @ 06150368 */
                    /* catch() { ... } // from try @ 0614d9c8 with catch @ 0615036c */
                    /* catch() { ... } // from try @ 0614d918 with catch @ 06150370 */
                    /* catch() { ... } // from try @ 0614d7f4 with catch @ 06150374 */
                    /* catch() { ... } // from try @ 0614bbfc with catch @ 06150378 */
                    /* catch() { ... } // from try @ 0614def0 with catch @ 0615037c */
                    /* catch() { ... } // from try @ 0614de3c with catch @ 06150380 */
              uVar15 = FUN_06280f14();
            }
          }
          else {
                    /* catch() { ... } // from try @ 0614e124 with catch @ 06150350 */
                    /* catch() { ... } // from try @ 0614ce08 with catch @ 06150354 */
                    /* catch() { ... } // from try @ 0614bc18 with catch @ 06150358 */
            if ((lVar13 == 0) && ((int)plVar18[0xc] == 3)) goto LAB_0615035c;
          }
        }
        else {
                    /* catch() { ... } // from try @ 0614e4e8 with catch @ 06150328 */
                    /* catch() { ... } // from try @ 0614e21c with catch @ 0615032c */
                    /* catch() { ... } // from try @ 0614e138 with catch @ 06150330 */
                    /* catch() { ... } // from try @ 0614ebc0 with catch @ 06150334 */
          uVar15 = FUN_061526cc();
                    /* catch() { ... } // from try @ 0614e828 with catch @ 06150338 */
        }
                    /* catch() { ... } // from try @ 0614dc94 with catch @ 06150384 */
        iVar10 = (int)plVar18[0xc];
                    /* catch() { ... } // from try @ 0614b93c with catch @ 06150388 */
                    /* catch() { ... } // from try @ 0614d9ac with catch @ 0615038c */
        if (iVar10 == 1) {
                    /* catch() { ... } // from try @ 0614cff8 with catch @ 06150490 */
                    /* catch() { ... } // from try @ 0614cfa4 with catch @ 06150494 */
          if (*plVar14 != 0) {
LAB_06150498:
                    /* catch() { ... } // from try @ 0614ced0 with catch @ 06150498 */
            if (lVar13 == 0) goto LAB_061509d0;
LAB_061504ac:
                    /* catch() { ... } // from try @ 0614df54 with catch @ 061504ac */
                    /* catch() { ... } // from try @ 0614dea0 with catch @ 061504b0 */
            if (*(long *)(lVar13 + 0x48) == 0) {
                    /* catch() { ... } // from try @ 0614d71c with catch @ 061504ec */
                    /* catch() { ... } // from try @ 0614d6a8 with catch @ 061504f0 */
                    /* catch() { ... } // from try @ 0614d62c with catch @ 061504f4 */
              if ((unaff_x23 != 0) && (*(int *)(unaff_x23 + 0x10) != 0)) {
                    /* catch() { ... } // from try @ 0614d5bc with catch @ 061504f8 */
                    /* catch() { ... } // from try @ 0614d518 with catch @ 061504fc */
                    /* catch() { ... } // from try @ 0614d4a0 with catch @ 06150500 */
                    /* catch() { ... } // from try @ 0614d400 with catch @ 06150504 */
                lVar13 = FUN_0614ef0c();
                    /* catch() { ... } // from try @ 0614d38c with catch @ 06150508 */
                    /* catch() { ... } // from try @ 0614d320 with catch @ 0615050c */
                *plVar14 = lVar13;
                    /* catch() { ... } // from try @ 0614d2c0 with catch @ 06150510 */
                    /* catch() { ... } // from try @ 0614d248 with catch @ 06150514 */
                    /* catch() { ... } // from try @ 0614d1dc with catch @ 06150518 */
                thunk_FUN_0333a630(plVar14,lVar13);
              }
            }
            else {
                    /* catch() { ... } // from try @ 0614ddec with catch @ 061504b4 */
                    /* catch() { ... } // from try @ 0614dd6c with catch @ 061504b8 */
                    /* catch() { ... } // from try @ 0614dcf8 with catch @ 061504bc */
              uVar16 = FUN_057aa92c(*unaff_x24,*(long *)(lVar13 + 0x48),0);
                    /* catch() { ... } // from try @ 0614dc44 with catch @ 061504c0 */
              if ((uVar16 & 1) != 0) {
                    /* catch() { ... } // from try @ 0614b8ec with catch @ 061504c4 */
                    /* catch() { ... } // from try @ 0614dbc4 with catch @ 061504c8 */
                    /* catch() { ... } // from try @ 0614db64 with catch @ 061504cc */
                    /* catch() { ... } // from try @ 0614dae4 with catch @ 061504d0 */
                    /* catch() { ... } // from try @ 0614da78 with catch @ 061504d4 */
                    /* catch() { ... } // from try @ 0614da18 with catch @ 061504d8 */
                    /* catch() { ... } // from try @ 0614d960 with catch @ 061504dc */
                    /* catch() { ... } // from try @ 0614d8b0 with catch @ 061504e0 */
                    /* catch() { ... } // from try @ 0614d83c with catch @ 061504e4 */
                FUN_062810dc();
                    /* catch() { ... } // from try @ 0614d788 with catch @ 061504e8 */
              }
            }
                    /* catch() { ... } // from try @ 0614d168 with catch @ 0615051c */
                    /* catch() { ... } // from try @ 0614d0f0 with catch @ 06150520 */
                    /* catch() { ... } // from try @ 0614d098 with catch @ 06150524 */
                    /* catch() { ... } // from try @ 0614cfec with catch @ 06150528 */
                    /* catch() { ... } // from try @ 0614cf74 with catch @ 0615052c */
            FUN_0614fe80();
          }
        }
        else {
                    /* catch() { ... } // from try @ 0614d8fc with catch @ 06150390 */
                    /* catch() { ... } // from try @ 0614d7d8 with catch @ 06150394 */
          if (iVar10 == 3) {
                    /* catch() { ... } // from try @ 0614e064 with catch @ 061504a0 */
            if (lVar13 != 0) {
                    /* catch() { ... } // from try @ 0614dfb4 with catch @ 061504a4 */
                    /* catch() { ... } // from try @ 0614bbac with catch @ 061504a8 */
              FUN_0615237c(uVar15,plVar18);
              goto LAB_061504ac;
            }
          }
          else {
                    /* catch() { ... } // from try @ 0614d574 with catch @ 06150398 */
                    /* catch() { ... } // from try @ 0614d048 with catch @ 0615039c */
            if (iVar10 != 2) goto LAB_06150498;
                    /* catch() { ... } // from try @ 0614bbf0 with catch @ 061503a0 */
                    /* catch() { ... } // from try @ 0614dee4 with catch @ 061503a4 */
                    /* catch() { ... } // from try @ 0614de30 with catch @ 061503a8 */
                    /* catch() { ... } // from try @ 0614dc88 with catch @ 061503ac */
                    /* catch() { ... } // from try @ 0614b930 with catch @ 061503b0 */
                    /* catch() { ... } // from try @ 0614dbfc with catch @ 061503b4 */
            bVar3 = *(byte *)(*(long *)System_Func<UIHoverEventArgs>_TypeInfo + 0x130);
                    /* catch() { ... } // from try @ 0614db1c with catch @ 061503b8 */
                    /* catch() { ... } // from try @ 0614d9a0 with catch @ 061503bc */
                    /* catch() { ... } // from try @ 0614d8f0 with catch @ 061503c0 */
                    /* catch() { ... } // from try @ 0614d7cc with catch @ 061503c4 */
                    /* catch() { ... } // from try @ 0614dda4 with catch @ 061503c8 */
                    /* catch() { ... } // from try @ 0614e01c with catch @ 061503cc */
                    /* catch() { ... } // from try @ 0614d550 with catch @ 061503d0 */
            if ((*(byte *)(*plVar18 + 0x130) < bVar3) ||
               (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar3 * 8 + -8) !=
                *(long *)System_Func<UIHoverEventArgs>_TypeInfo)) goto LAB_061509d0;
                    /* catch() { ... } // from try @ 0614d024 with catch @ 061503d4 */
            lVar19 = plVar18[0xd];
                    /* catch() { ... } // from try @ 0614bbe0 with catch @ 061503d8 */
                    /* catch() { ... } // from try @ 0614ded4 with catch @ 061503dc */
                    /* catch() { ... } // from try @ 0614de20 with catch @ 061503e0 */
                    /* catch() { ... } // from try @ 0614dd24 with catch @ 061503e4 */
            uVar16 = thunk_FUN_057aa644(lVar19,*unaff_x24,0);
                    /* catch() { ... } // from try @ 0614dc78 with catch @ 061503e8 */
            if ((uVar16 & 1) != 0) {
                    /* catch() { ... } // from try @ 0614b924 with catch @ 061503ec */
                    /* catch() { ... } // from try @ 0614d994 with catch @ 061503f0 */
                    /* catch() { ... } // from try @ 0614d8e4 with catch @ 061503f4 */
                    /* catch() { ... } // from try @ 0614d868 with catch @ 061503f8 */
                    /* catch() { ... } // from try @ 0614d7bc with catch @ 061503fc */
                    /* catch() { ... } // from try @ 0614d658 with catch @ 06150400 */
                    /* catch() { ... } // from try @ 0614d5e8 with catch @ 06150404 */
              FUN_06280f9c();
            }
                    /* catch() { ... } // from try @ 0614d3b8 with catch @ 06150408 */
            if (lVar13 == 0) {
                    /* catch() { ... } // from try @ 0614de8c with catch @ 06150540 */
              if (lVar19 != 0) {
                if (*(int *)(lVar19 + 0x10) == 0) {
                  FUN_06280f14();
                }
                else {
                  FUN_061526cc();
                }
              }
            }
            else {
                    /* catch() { ... } // from try @ 0614d274 with catch @ 0615040c */
                    /* catch() { ... } // from try @ 0614d11c with catch @ 06150410 */
                    /* catch() { ... } // from try @ 0614cef0 with catch @ 06150414 */
                    /* catch() { ... } // from try @ 0614e07c with catch @ 06150418 */
                    /* catch() { ... } // from try @ 0614bbb8 with catch @ 0615041c */
              uVar16 = FUN_057aa92c(lVar19,*(undefined8 *)(lVar13 + 0x48),0);
                    /* catch() { ... } // from try @ 0614df6c with catch @ 06150420 */
              if ((uVar16 & 1) != 0) {
                    /* catch() { ... } // from try @ 0614deac with catch @ 06150424 */
                    /* catch() { ... } // from try @ 0614ddf8 with catch @ 06150428 */
                    /* catch() { ... } // from try @ 0614dd04 with catch @ 0615042c */
                    /* catch() { ... } // from try @ 0614dc50 with catch @ 06150430 */
                    /* catch() { ... } // from try @ 0614b8f8 with catch @ 06150434 */
                    /* catch() { ... } // from try @ 0614db7c with catch @ 06150438 */
                    /* catch() { ... } // from try @ 0614da9c with catch @ 0615043c */
                    /* catch() { ... } // from try @ 0614da28 with catch @ 06150440 */
                    /* catch() { ... } // from try @ 0614d96c with catch @ 06150444 */
                FUN_062810dc();
              }
                    /* catch() { ... } // from try @ 0614d8bc with catch @ 06150448 */
                    /* catch() { ... } // from try @ 0614d848 with catch @ 0615044c */
              uVar15 = *(undefined8 *)(unaff_x20 + 0xa8);
                    /* catch() { ... } // from try @ 0614d794 with catch @ 06150450 */
                    /* catch() { ... } // from try @ 0614d740 with catch @ 06150454 */
              *(long *)(unaff_x20 + 0xa8) = lVar13;
                    /* catch() { ... } // from try @ 0614d6cc with catch @ 06150458 */
                    /* catch() { ... } // from try @ 0614d638 with catch @ 0615045c */
              thunk_FUN_0333a630(puVar1,lVar13);
                    /* catch() { ... } // from try @ 0614d5c8 with catch @ 06150460 */
                    /* catch() { ... } // from try @ 0614d524 with catch @ 06150464 */
                    /* catch() { ... } // from try @ 0614d4d0 with catch @ 06150468 */
                    /* catch() { ... } // from try @ 0614d418 with catch @ 0615046c */
                    /* catch() { ... } // from try @ 0614d398 with catch @ 06150470 */
              FUN_0614fe80();
                    /* catch() { ... } // from try @ 0614d344 with catch @ 06150474 */
                    /* catch() { ... } // from try @ 0614d2d0 with catch @ 06150478 */
                    /* catch() { ... } // from try @ 0614d254 with catch @ 0615047c */
              *(undefined8 *)(unaff_x20 + 0xa8) = uVar15;
                    /* catch() { ... } // from try @ 0614d200 with catch @ 06150480 */
              thunk_FUN_0333a630(puVar1,uVar15);
                    /* catch() { ... } // from try @ 0614d18c with catch @ 06150484 */
                    /* catch() { ... } // from try @ 0614d0fc with catch @ 06150488 */
                    /* catch() { ... } // from try @ 0614d0a8 with catch @ 0615048c */
            }
          }
        }
                    /* catch() { ... } // from try @ 0614cec4 with catch @ 06150530 */
        lVar13 = *(long *)(unaff_x19 + 0x58);
                    /* catch() { ... } // from try @ 0614ce6c with catch @ 06150534 */
        iVar12 = iVar12 + 1;
                    /* catch() { ... } // from try @ 0614dfa0 with catch @ 06150538 */
        if (lVar13 == 0) goto LAB_061509d0;
      }
      *(long *)(unaff_x20 + 0x60) = unaff_x19;
      thunk_FUN_0333a630();
      FUN_061524ac();
      FUN_061528e0();
      if (unaff_x23 == 0) {
        unaff_x23 = **(long **)(*(long *)PTR_DAT_072794f8 + 0xb8);
      }
      *(long *)(unaff_x20 + 0x50) = unaff_x23;
      thunk_FUN_0333a630((long *)(unaff_x20 + 0x50),unaff_x23);
      FUN_06152bec();
      plVar18 = *(long **)(unaff_x20 + 0x90);
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x2b8))(plVar18,*(undefined8 *)(*plVar18 + 0x2c0));
        puVar6 = System_Collections_Generic_List<CombineInstance>_TypeInfo;
        lVar13 = *(long *)(unaff_x19 + 0x58);
        if (lVar13 != 0) {
          puVar2 = (undefined8 *)(unaff_x20 + 0xb0);
          iVar12 = 0;
          plVar18 = (long *)System_Func<Transform>_TypeInfo;
          goto LAB_06150628;
        }
      }
    }
  }
LAB_061509d0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
LAB_06150628:
  iVar10 = FUN_058f278c(lVar13,0);
  if (iVar10 <= iVar12) {
    lVar13 = thunk_FUN_032a56a0(*(undefined8 *)System_Collections_Generic_List<Collider>_TypeInfo);
    System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
              (lVar13,*(undefined8 *)System_Collections_Generic_List<Character>_TypeInfo);
    plVar18 = *(long **)(unaff_x19 + 0x60);
    if (plVar18 != (long *)0x0) {
      iVar12 = FUN_058f278c(plVar18,0);
      puVar9 = System_Collections_Generic_List<ClimbInteractable>_TypeInfo;
      puVar8 = System_Func<TransitionEndEvent>_TypeInfo;
      puVar7 = System_Func<TransitionCancelEvent>_TypeInfo;
      puVar6 = System_Func<FocusOutEvent>_TypeInfo;
      puVar5 = System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo;
      if (0 < iVar12) {
        iVar12 = 0;
        goto LAB_06150a38;
      }
      if (lVar13 != 0) {
        if (*(int *)(lVar13 + 0x18) < 1) {
          return;
        }
        iVar12 = 0;
        while( true ) {
          lVar19 = *(long *)(unaff_x19 + 0x60);
          uVar15 = FUN_041e29a8(lVar13,iVar12,*(undefined8 *)puVar9);
          if (lVar19 == 0) break;
          FUN_061a2778(lVar19,uVar15,0);
          iVar12 = iVar12 + 1;
          if (*(int *)(lVar13 + 0x18) <= iVar12) {
            return;
          }
        }
      }
    }
    goto LAB_061509d0;
  }
  plVar14 = *(long **)(unaff_x19 + 0x58);
  if ((plVar14 == (long *)0x0) ||
     (plVar14 = (long *)(**(code **)(*plVar14 + 0x308))
                                  (plVar14,iVar12,*(undefined8 *)(*plVar14 + 0x310)),
     plVar14 == (long *)0x0)) goto LAB_061509d0;
  lVar13 = *(long *)puVar5;
  bVar3 = *(byte *)(*plVar14 + 0x130);
  bVar4 = *(byte *)(lVar13 + 0x130);
  if ((bVar3 < bVar4) ||
     (lVar19 = *(long *)(*plVar14 + 200), *(long *)(lVar19 + (ulong)bVar4 * 8 + -8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
    FUN_032d618c(plVar14);
  }
  lVar13 = plVar14[9];
  iVar10 = (int)plVar14[0xc];
  if (lVar13 == 0) {
    if (iVar10 == 3) {
      lVar13 = *(long *)puVar6;
      bVar4 = *(byte *)(lVar13 + 0x130);
      if ((bVar3 < bVar4) || (*(long *)(lVar19 + (ulong)bVar4 * 8 + -8) != lVar13))
      goto LAB_061509d0;
      lVar13 = plVar14[8];
      if (*(int *)(*(long *)PTR_DAT_0727ea28 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar16 = FUN_062ac390(lVar13,0,0);
      if ((uVar16 & 1) != 0) {
        lVar13 = plVar14[0xd];
        if (lVar13 == 0) goto LAB_061509d0;
        iVar10 = 0;
        while (iVar11 = FUN_058f278c(lVar13,0), iVar10 < iVar11) {
          plVar17 = (long *)plVar14[0xd];
          if (plVar17 == (long *)0x0) goto LAB_061509d0;
          plVar17 = (long *)(**(code **)(*plVar17 + 0x308))
                                      (plVar17,iVar10,*(undefined8 *)(*plVar17 + 0x310));
          if (plVar17 == (long *)0x0) {
LAB_0615099c:
            FUN_06280f9c();
            break;
          }
          bVar3 = *(byte *)(*plVar18 + 0x130);
          if ((*(byte *)(*plVar17 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar3 * 8 + -8) != *plVar18))
          goto LAB_0615099c;
          lVar13 = plVar14[0xd];
          iVar10 = iVar10 + 1;
          if (lVar13 == 0) goto LAB_061509d0;
        }
      }
    }
  }
  else {
    if (iVar10 == 3) {
      plVar18 = (long *)*puVar2;
      if (plVar18 == (long *)0x0) {
        uVar15 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728f668);
        FUN_058f26dc(uVar15,0);
        *puVar2 = uVar15;
        thunk_FUN_0333a630(puVar2,uVar15);
        plVar18 = (long *)*puVar2;
      }
      uVar20 = *puVar1;
      uVar15 = thunk_FUN_032a56a0(*(undefined8 *)System_Collections_Generic_List<Button>_TypeInfo);
      lVar19 = *(long *)puVar6;
      bVar3 = *(byte *)(lVar19 + 0x130);
      if (*(byte *)(*plVar14 + 0x130) < bVar3) {
        plVar17 = (long *)0x0;
      }
      else {
        plVar17 = plVar14;
        if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != lVar19) {
          plVar17 = (long *)0x0;
        }
      }
      FUN_0614e8c4(uVar15,plVar17,uVar20);
      if (plVar18 == (long *)0x0) goto LAB_061509d0;
      (**(code **)(*plVar18 + 0x308))(plVar18,uVar15,*(undefined8 *)(*plVar18 + 0x310));
      plVar18 = *(long **)(unaff_x20 + 0x90);
      if (plVar18 == (long *)0x0) goto LAB_061509d0;
      lVar19 = (**(code **)(*plVar18 + 0x308))(plVar18,lVar13,*(undefined8 *)(*plVar18 + 0x310));
      plVar18 = (long *)System_Func<Transform>_TypeInfo;
joined_r0x06150964:
      if (lVar19 == 0) {
        plVar17 = *(long **)(unaff_x20 + 0x90);
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x2a8))(plVar17,lVar13,plVar14,*(undefined8 *)(*plVar17 + 0x2b0));
          FUN_06152cf8();
          goto LAB_061509b8;
        }
        goto LAB_061509d0;
      }
      goto LAB_061509c4;
    }
    if (iVar10 == 2) {
      if (lVar13 != *(long *)(unaff_x20 + 0x58)) {
        bVar4 = *(byte *)(*(long *)System_Func<UIHoverEventArgs>_TypeInfo + 0x130);
        if ((bVar3 < bVar4) ||
           (*(long *)(lVar19 + (ulong)bVar4 * 8 + -8) !=
            *(long *)System_Func<UIHoverEventArgs>_TypeInfo)) goto LAB_061509d0;
        lVar13 = plVar14[0xd];
        if (lVar13 == 0) {
          lVar13 = **(long **)(*(long *)PTR_DAT_072794f8 + 0xb8);
        }
        if (unaff_x21 == (long *)0x0) goto LAB_061509d0;
        uVar16 = (**(code **)(*unaff_x21 + 0x348))();
        if ((uVar16 & 1) == 0) {
          (**(code **)(*unaff_x21 + 0x308))();
        }
        if ((*(long *)(unaff_x20 + 0x58) == 0) ||
           (plVar14 = (long *)FUN_0619bc48(*(long *)(unaff_x20 + 0x58),0), plVar14 == (long *)0x0))
        goto LAB_061509d0;
        uVar16 = (**(code **)(*plVar14 + 0x348))(plVar14,lVar13,*(undefined8 *)(*plVar14 + 0x350));
        if ((uVar16 & 1) != 0) goto LAB_061509b8;
        if ((*(long *)(unaff_x20 + 0x58) == 0) ||
           (plVar14 = (long *)FUN_0619bc48(*(long *)(unaff_x20 + 0x58),0), plVar14 == (long *)0x0))
        goto LAB_061509d0;
        (**(code **)(*plVar14 + 0x308))(plVar14,lVar13,*(undefined8 *)(*plVar14 + 0x310));
      }
    }
    else if (iVar10 == 1) {
      plVar17 = *(long **)(unaff_x20 + 0x90);
      if (plVar17 != (long *)0x0) {
        lVar19 = (**(code **)(*plVar17 + 0x308))(plVar17,lVar13,*(undefined8 *)(*plVar17 + 0x310));
        goto joined_r0x06150964;
      }
      goto LAB_061509d0;
    }
  }
LAB_061509b8:
  FUN_061528e0();
LAB_061509c4:
  lVar13 = *(long *)(unaff_x19 + 0x58);
  iVar12 = iVar12 + 1;
  if (lVar13 == 0) goto LAB_061509d0;
  goto LAB_06150628;
LAB_06150a38:
  lVar19 = (**(code **)(*plVar18 + 0x308))(plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
  if (lVar19 == 0) goto LAB_061509d0;
  *(long *)(lVar19 + 0x28) = unaff_x19;
  thunk_FUN_0333a630();
  plVar14 = (long *)(**(code **)(*plVar18 + 0x308))
                              (plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
  if (plVar14 == (long *)0x0) {
LAB_06150aac:
    plVar14 = (long *)(**(code **)(*plVar18 + 0x308))
                                (plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
    if (plVar14 == (long *)0x0) {
LAB_06150ae0:
      plVar14 = (long *)0x0;
    }
    else {
      lVar19 = *(long *)puVar7;
      bVar3 = *(byte *)(lVar19 + 0x130);
      if (*(byte *)(*plVar14 + 0x130) < bVar3) goto LAB_06150ae0;
      if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != lVar19) {
        plVar14 = (long *)0x0;
      }
    }
    plVar17 = (long *)(**(code **)(*plVar18 + 0x308))
                                (plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
    if (plVar14 != (long *)0x0) {
      if (plVar17 != (long *)0x0) {
        lVar19 = *(long *)puVar7;
        bVar3 = *(byte *)(lVar19 + 0x130);
        if ((*(byte *)(*plVar17 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar3 * 8 + -8) != lVar19))
        goto LAB_06151100;
      }
      System_Xml_Serialization_TypeMember__GetHashCode();
      FUN_0619a8d4();
joined_r0x06150b64:
      if (plVar17 != (long *)0x0) goto LAB_06150cfc;
      goto LAB_061509d0;
    }
    if (plVar17 == (long *)0x0) {
LAB_06150b90:
      plVar14 = (long *)0x0;
    }
    else {
      lVar19 = *(long *)puVar5;
      bVar3 = *(byte *)(lVar19 + 0x130);
      if (*(byte *)(*plVar17 + 0x130) < bVar3) goto LAB_06150b90;
      plVar14 = plVar17;
      if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar3 * 8 + -8) != lVar19) {
        plVar14 = (long *)0x0;
      }
    }
    plVar17 = (long *)(**(code **)(*plVar18 + 0x308))
                                (plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
    if (plVar14 != (long *)0x0) {
      if (plVar17 != (long *)0x0) {
        lVar19 = *(long *)puVar5;
        bVar3 = *(byte *)(lVar19 + 0x130);
        if ((*(byte *)(*plVar17 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar3 * 8 + -8) != lVar19))
        goto LAB_06151100;
      }
      FUN_06154230();
LAB_06150cd0:
      FUN_0619a944();
      if (plVar17 != (long *)0x0) {
        FUN_061ac6b8(plVar17,0);
        goto LAB_06150cfc;
      }
      goto LAB_061509d0;
    }
    if (plVar17 == (long *)0x0) {
LAB_06150c54:
      plVar14 = (long *)0x0;
    }
    else {
      lVar19 = *(long *)puVar6;
      bVar3 = *(byte *)(lVar19 + 0x130);
      if (*(byte *)(*plVar17 + 0x130) < bVar3) goto LAB_06150c54;
      plVar14 = plVar17;
      if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar3 * 8 + -8) != lVar19) {
        plVar14 = (long *)0x0;
      }
    }
    plVar17 = (long *)(**(code **)(*plVar18 + 0x308))
                                (plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
    if (plVar14 != (long *)0x0) {
      if (plVar17 != (long *)0x0) {
        lVar19 = *(long *)puVar6;
        bVar3 = *(byte *)(lVar19 + 0x130);
        if ((*(byte *)(*plVar17 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar3 * 8 + -8) != lVar19))
        goto LAB_06151100;
      }
      FUN_06154afc();
      goto LAB_06150cd0;
    }
    if (plVar17 == (long *)0x0) {
LAB_06150d48:
      plVar14 = (long *)0x0;
    }
    else {
      bVar3 = *(byte *)(*(long *)System_Func<TransitionRunEvent>_TypeInfo + 0x130);
      if (*(byte *)(*plVar17 + 0x130) < bVar3) goto LAB_06150d48;
      plVar14 = plVar17;
      if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)System_Func<TransitionRunEvent>_TypeInfo) {
        plVar14 = (long *)0x0;
      }
    }
    plVar17 = (long *)(**(code **)(*plVar18 + 0x308))
                                (plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
    if (plVar14 != (long *)0x0) {
      if (plVar17 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)System_Func<TransitionRunEvent>_TypeInfo + 0x130);
        if ((*(byte *)(*plVar17 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)System_Func<TransitionRunEvent>_TypeInfo)) goto LAB_06151100;
      }
      FUN_061550d0();
      FUN_0619a9b4();
      goto joined_r0x06150b64;
    }
    if (plVar17 == (long *)0x0) {
LAB_06150e04:
      plVar14 = (long *)0x0;
    }
    else {
      bVar3 = *(byte *)(*(long *)System_Collections_Generic_List<Color>_TypeInfo + 0x130);
      if (*(byte *)(*plVar17 + 0x130) < bVar3) goto LAB_06150e04;
      plVar14 = plVar17;
      if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)System_Collections_Generic_List<Color>_TypeInfo) {
        plVar14 = (long *)0x0;
      }
    }
    plVar17 = (long *)(**(code **)(*plVar18 + 0x308))
                                (plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
    if (plVar14 != (long *)0x0) {
      if (plVar17 == (long *)0x0) {
        FUN_06155324();
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      bVar3 = *(byte *)(*(long *)System_Collections_Generic_List<Color>_TypeInfo + 0x130);
      if ((*(byte *)(*plVar17 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)System_Collections_Generic_List<Color>_TypeInfo)) goto LAB_06151100;
      FUN_06155324();
      goto LAB_06150cfc;
    }
    if (plVar17 == (long *)0x0) {
LAB_06150eb0:
      plVar14 = (long *)0x0;
    }
    else {
      bVar3 = *(byte *)(*(long *)System_Collections_Generic_List<Column>_TypeInfo + 0x130);
      if (*(byte *)(*plVar17 + 0x130) < bVar3) goto LAB_06150eb0;
      plVar14 = plVar17;
      if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)System_Collections_Generic_List<Column>_TypeInfo) {
        plVar14 = (long *)0x0;
      }
    }
    plVar17 = (long *)(**(code **)(*plVar18 + 0x308))
                                (plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
    if (plVar14 != (long *)0x0) {
      if (plVar17 == (long *)0x0) {
        FUN_061554f4();
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      bVar3 = *(byte *)(*(long *)System_Collections_Generic_List<Column>_TypeInfo + 0x130);
      if ((*(byte *)(*plVar17 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)System_Collections_Generic_List<Column>_TypeInfo)) {
LAB_06151100:
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar17);
      }
      FUN_061554f4();
      goto LAB_06150cfc;
    }
    if (plVar17 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)System_Func<Transform>_TypeInfo + 0x130);
      if (*(byte *)(*plVar17 + 0x130) < bVar3) {
        plVar17 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar3 * 8 + -8) !=
               *(long *)System_Func<Transform>_TypeInfo) {
        plVar17 = (long *)0x0;
      }
    }
    (**(code **)(*plVar18 + 0x308))(plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
    if (plVar17 == (long *)0x0) {
      FUN_06280f9c();
      (**(code **)(*plVar18 + 0x308))(plVar18,iVar12,*(undefined8 *)(*plVar18 + 0x310));
      if (lVar13 != 0) {
        FUN_06e3d028(*(undefined8 *)(lVar13 + 0x10));
        return;
      }
      goto LAB_061509d0;
    }
    FUN_0615575c();
  }
  else {
    bVar3 = *(byte *)(*(long *)puVar8 + 0x130);
    if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar8))
    goto LAB_06150aac;
    FUN_06153fbc();
    FUN_0619a864();
LAB_06150cfc:
    FUN_06280750();
  }
  iVar12 = iVar12 + 1;
  iVar10 = FUN_058f278c(plVar18,0);
  if (iVar10 <= iVar12) {
    FUN_0615107c();
    return;
  }
  goto LAB_06150a38;
}


