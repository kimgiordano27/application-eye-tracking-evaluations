/*
FUNCTION_NAME: Unity.Netcode.RpcTarget$$Dispose
ENTRY_POINT: 05d98bfc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


void Unity_Netcode_RpcTarget__Dispose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  undefined8 uVar57;
  long lVar58;
  long lVar59;
  undefined8 uVar60;
  long lVar61;
  long lVar62;
  undefined8 uVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  long lVar100;
  long lVar101;
  long lVar102;
  long lVar103;
  long lVar104;
  long lVar105;
  long lVar106;
  long lVar107;
  long lVar108;
  long lVar109;
  long lVar110;
  long lVar111;
  long lVar112;
  long lVar113;
  long lVar114;
  long lVar115;
  long lVar116;
  long lVar117;
  long lVar118;
  long lVar119;
  long lVar120;
  long lVar121;
  long lVar122;
  long lVar123;
  long lVar124;
  undefined8 uVar125;
  long lVar126;
  undefined8 uVar127;
  long lVar128;
  long unaff_x19;
  long unaff_x24;
  undefined8 *unaff_x27;
  long *plVar129;
  undefined8 in_stack_00000020;
  long in_stack_00000068;
  long lStack0000000000000070;
  long in_stack_00000080;
  long in_stack_00000098;
  long in_stack_000005a8;
  
  lStack0000000000000070 = param_1;
  lVar5 = FUN_05d9ca18();
  lVar6 = FUN_05d9cc10();
  lVar7 = FUN_05d9ce08();
  lVar8 = FUN_05d9d000();
  lVar9 = FUN_05d9d1f8();
  lVar10 = FUN_05d9d3f0();
  lVar11 = Unity_Netcode_NetworkMetrics__TrackOwnershipChangeSent();
  lVar12 = FUN_05d9d7e0();
  lVar13 = FUN_05d9d9d8();
  lVar14 = FUN_05d9dbd0();
  lVar15 = FUN_05d9ddc8();
  lVar16 = FUN_05d9dfc0();
  lVar17 = FUN_05d9e1b8();
  lVar18 = FUN_05d9e3b0();
  lVar19 = FUN_05d9e5a8();
  lVar20 = FUN_05d9e7a0();
  lVar21 = FUN_05d9e998();
  lVar22 = FUN_05d9eb90();
  lVar23 = FUN_05d9ed88();
  lVar24 = FUN_05d9ef80();
  lVar25 = FUN_05d9f178();
  lVar26 = FUN_05d9f370();
  lVar27 = FUN_05d9f568();
  lVar28 = FUN_05d9f760();
  lVar29 = FUN_05d9f958();
  lVar30 = FUN_05d9fb50();
  lVar31 = FUN_05d9fd48();
  lVar32 = FUN_05d9ff40();
  lVar33 = FUN_05da0138();
  lVar34 = FUN_05da0330();
  lVar35 = FUN_05da0528();
  lVar36 = FUN_05da0720();
  lVar37 = FUN_05da0918();
  lVar38 = FUN_05da0b10();
  lVar39 = FUN_05da0d08();
  lVar40 = FUN_05da0f00();
  lVar41 = FUN_05da10f8();
  lVar42 = FUN_05da12f0();
  lVar43 = FUN_05da14e8();
  lVar44 = FUN_05da16e0();
  lVar45 = FUN_05da18d8();
  lVar46 = FUN_05da1abc();
  lVar47 = FUN_05da1ca0();
  lVar48 = FUN_05da1e84();
  lVar49 = FUN_05da2068();
  lVar50 = FUN_05da224c();
  lVar51 = FUN_05da2430();
  lVar52 = FUN_05da2614();
  lVar53 = FUN_05da27f8();
  lVar54 = FUN_05da29dc();
  lVar55 = FUN_05da2bc0();
  lVar56 = FUN_05da2dc4();
  uVar57 = FUN_05da2fc8();
  lVar58 = FUN_05da31ec();
  lVar59 = FUN_05da33f0();
  uVar60 = FUN_05da35f4();
  lVar61 = FUN_05da3818();
  lVar62 = FUN_05da3a1c();
  uVar63 = FUN_05da3c20();
  lVar64 = FUN_05da3e44();
  lVar65 = FUN_05da4048();
  lVar66 = FUN_05da424c();
  lVar67 = FUN_05da4450();
  lVar68 = FUN_05da4648();
  lVar69 = FUN_05da4840();
  lVar70 = FUN_05da4a38();
  lVar71 = FUN_05da4c30();
  lVar72 = FUN_05da4e28();
  lVar73 = FUN_05da5020();
  lVar74 = FUN_05da5218();
  lVar75 = FUN_05da5410();
  lVar76 = FUN_05da5608();
  lVar77 = FUN_05da5800();
  lVar78 = FUN_05da59f8();
  lVar79 = FUN_05da5bf0();
  lVar80 = FUN_05da5de8();
  lVar81 = FUN_05da5fe0();
  lVar82 = FUN_05da61d8();
  lVar83 = FUN_05da63d0();
  lVar84 = FUN_05da65c8();
  lVar85 = FUN_05da67c0();
  lVar86 = FUN_05da69b8();
  lVar87 = FUN_05da6bb0();
  lVar88 = FUN_05da6da8();
  lVar89 = FUN_05da6fa0();
  lVar90 = FUN_05da7198();
  lVar91 = FUN_05da7390();
  lVar92 = FUN_05da7588();
  lVar93 = Unity_Netcode_NetworkSceneManager__SetTheSceneBeingSynchronized();
  lVar94 = FUN_05da7978();
  lVar95 = FUN_05da7b70();
  lVar96 = FUN_05da7d68();
  lVar97 = Unity_Netcode_NetworkSceneManager__ValidateSceneEvent();
  lVar98 = FUN_05da8158();
  lVar99 = FUN_05da8350();
  lVar100 = FUN_05da8548();
  lVar101 = FUN_05da8740();
  lVar102 = FUN_05da8938();
  lVar103 = FUN_05da8b30();
  lVar104 = FUN_05da8d28();
  lVar105 = FUN_05da8f20();
  lVar106 = FUN_05da9118();
  lVar107 = FUN_05da9310();
  lVar108 = FUN_05da9508();
  lVar109 = FUN_05da96ec();
  lVar110 = FUN_05da98d0();
  lVar111 = FUN_05da9ab4();
  lVar112 = FUN_05da9c98();
  lVar113 = FUN_05da9e7c();
  lVar114 = FUN_05daa074();
  lVar115 = FUN_05daa26c();
  lVar116 = FUN_05daa464();
  lVar117 = FUN_05daa65c();
  lVar118 = FUN_05daa854();
  lVar119 = FUN_05daaa4c();
  lVar120 = FUN_05daac44();
  lVar121 = FUN_05daae3c();
  lVar122 = FUN_05dab034();
  lVar123 = FUN_05dab22c();
  lVar124 = FUN_05dab424();
  uVar125 = FUN_05dab61c();
  FUN_05d6ddec(&stack0x00000558,
               *(undefined8 *)
                UnityEngine_XR_Interaction_Toolkit_InteractableUnregisteredEventArgs_TypeInfo,0);
  FUN_05d978f4(&stack0x000005a8,0,0,0);
  FUN_05d6ddec(&stack0x00000548,
               *(undefined8 *)Unity_Services_Wire_Internal_ConnectionFailedException_TypeInfo,0);
  FUN_05d978f4(&stack0x000005a8,1,0,0);
  FUN_05d6ddec(&stack0x00000538,*(undefined8 *)Unity_Netcode_ConnectionEvent_TypeInfo,0);
  FUN_05d978f4(&stack0x000005a8,2,0,0,in_stack_00000098,0);
  FUN_05d6ddec(&stack0x00000528,*unaff_x27,0);
  FUN_05d978f4(&stack0x000005a8,3,0,0,lVar55,0);
  FUN_05d6ddec(&stack0x00000518,*unaff_x27,0);
  FUN_05d978f4(&stack0x000005a8,4,0,0,lVar56,0);
  FUN_05d6ddec(&stack0x00000508,*unaff_x27,0);
  FUN_05d978f4(&stack0x000005a8,5,0,0,uVar57,0);
  FUN_05d6ddec(&stack0x000004f8,*unaff_x27,0);
  FUN_05d978f4(&stack0x000005a8,6,0,0,lVar58,0);
  FUN_05d6ddec(&stack0x000004e8,*unaff_x27,0);
  FUN_05d978f4(&stack0x000005a8,7,0,0,lVar59,0);
  FUN_05d6ddec(&stack0x000004d8,*unaff_x27,0);
  FUN_05d978f4(&stack0x000005a8,8,0,0,uVar60,0);
  FUN_05d6ddec(&stack0x000004c8,*unaff_x27,0);
  FUN_05d978f4(&stack0x000005a8,9,0,0,lVar61,0);
  FUN_05d6ddec(&stack0x000004b8,*unaff_x27,0);
  FUN_05d978f4(&stack0x000005a8,10,0,0,lVar62,0);
  FUN_05d6ddec(&stack0x000004a8,*unaff_x27,0);
  FUN_05d978f4(&stack0x000005a8,0xb,0,0,uVar63,0);
  FUN_05d6ddec(&stack0x00000498,*unaff_x27,0);
  FUN_05d978f4(&stack0x000005a8,0xc,0,0,lVar64,0);
  FUN_05d6ddec(&stack0x00000488,*unaff_x27,0);
  FUN_05d978f4(&stack0x000005a8,0xd,0,0,lVar65,0);
  FUN_05d6ddec(&stack0x00000478,*unaff_x27,0);
  FUN_05d978f4(&stack0x000005a8,0xe,0,0,lVar66,0);
  FUN_05d6ddec(&stack0x00000460,
               *(undefined8 *)Method_System_Collections_Generic_List<IXRInteractable>_AddRange__,0);
  puVar1 = Method_System_Collections_Generic_List<IXRHoverInteractor>_get_Item__;
  if ((in_stack_000005a8 != 0) && (lVar126 = *(long *)(in_stack_000005a8 + 0x138), lVar126 != 0)) {
    if (*(int *)(lVar126 + 0x18) == 0) {
LAB_05d9be18:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    *(undefined8 *)(lVar126 + 0x28) = 0;
    *(undefined8 *)(lVar126 + 0x20) = 0;
    LeanTween__value((undefined8 *)(lVar126 + 0x20),0);
    FUN_05d6ddec(&stack0x00000450,*(undefined8 *)puVar1,0);
    puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_GetEnumerator__;
    if ((in_stack_000005a8 != 0) && (lVar126 = *(long *)(in_stack_000005a8 + 0x138), lVar126 != 0))
    {
      if ((*(uint *)(lVar126 + 0x18) & 0xfffffffe) == 0) goto LAB_05d9be18;
      *(undefined8 *)(lVar126 + 0x38) = 0;
      *(undefined8 *)(lVar126 + 0x30) = 0;
      LeanTween__value((undefined8 *)(lVar126 + 0x30),0);
      FUN_05d6ddec(&stack0x00000440,*(undefined8 *)puVar1,0);
      puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_Contains__;
      if ((in_stack_000005a8 != 0) && (lVar126 = *(long *)(in_stack_000005a8 + 0x138), lVar126 != 0)
         ) {
        if (*(uint *)(lVar126 + 0x18) < 3) goto LAB_05d9be18;
        *(undefined8 *)(lVar126 + 0x48) = 0;
        *(undefined8 *)(lVar126 + 0x40) = 0;
        LeanTween__value((undefined8 *)(lVar126 + 0x40),0);
        FUN_05d6ddec(&stack0x00000430,*(undefined8 *)puVar1,0);
        puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_RemoveAt__;
        if ((in_stack_000005a8 != 0) &&
           (lVar126 = *(long *)(in_stack_000005a8 + 0x138), lVar126 != 0)) {
          if ((*(uint *)(lVar126 + 0x18) & 0xfffffffc) == 0) goto LAB_05d9be18;
          *(undefined8 *)(lVar126 + 0x58) = 0;
          *(undefined8 *)(lVar126 + 0x50) = 0;
          LeanTween__value((undefined8 *)(lVar126 + 0x50),0);
          FUN_05d6ddec(&stack0x00000420,*(undefined8 *)puVar1,0);
          puVar1 = Method_System_Collections_Generic_List<IXRInteractable>__ctor__;
          if ((in_stack_000005a8 != 0) &&
             (lVar126 = *(long *)(in_stack_000005a8 + 0x138), lVar126 != 0)) {
            if (*(uint *)(lVar126 + 0x18) < 5) goto LAB_05d9be18;
            *(undefined8 *)(lVar126 + 0x68) = 0;
            *(undefined8 *)(lVar126 + 0x60) = 0;
            LeanTween__value((undefined8 *)(lVar126 + 0x60),0);
            FUN_05d6ddec(&stack0x00000410,*(undefined8 *)puVar1,0);
            puVar1 = Method_System_Collections_Generic_List<IXRInteractable>_Clear__;
            if ((in_stack_000005a8 != 0) &&
               (lVar126 = *(long *)(in_stack_000005a8 + 0x138), lVar126 != 0)) {
              if (*(uint *)(lVar126 + 0x18) < 6) goto LAB_05d9be18;
              *(undefined8 *)(lVar126 + 0x78) = 0;
              *(undefined8 *)(lVar126 + 0x70) = 0;
              LeanTween__value((undefined8 *)(lVar126 + 0x70),0);
              FUN_05d6ddec(&stack0x00000400,*(undefined8 *)puVar1,0);
              puVar1 = Method_System_Collections_Generic_List<IContextProperty>_get_Item__;
              if ((in_stack_000005a8 != 0) &&
                 (lVar126 = *(long *)(in_stack_000005a8 + 0x138), lVar126 != 0)) {
                if (*(uint *)(lVar126 + 0x18) < 7) goto LAB_05d9be18;
                *(undefined8 *)(lVar126 + 0x88) = 0;
                *(undefined8 *)(lVar126 + 0x80) = 0;
                LeanTween__value((undefined8 *)(lVar126 + 0x80),0);
                uVar127 = FUN_02d966a4(*(undefined8 *)puVar1,0x7b);
                *(undefined8 *)(unaff_x19 + 0x1d0) = uVar127;
                LeanTween__value(unaff_x19 + 0x1d0,uVar127);
                plVar129 = *(long **)(unaff_x19 + 0x1d0);
                if (plVar129 != (long *)0x0) {
                  if ((in_stack_00000080 != 0) &&
                     (lVar126 = thunk_FUN_02dd3048(in_stack_00000080,
                                                   *(undefined8 *)(*plVar129 + 0x40)), lVar126 == 0)
                     ) {
LAB_05d9be1c:
                    uVar57 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                    FUN_02d96724(uVar57,0);
                  }
                  if ((int)plVar129[3] == 0) goto LAB_05d9be18;
                  plVar129[4] = in_stack_00000080;
                  LeanTween__value(plVar129 + 4,in_stack_00000080);
                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                  if (plVar129 == (long *)0x0) goto LAB_05d9be14;
                  if ((in_stack_00000098 != 0) &&
                     (lVar126 = thunk_FUN_02dd3048(in_stack_00000098,
                                                   *(undefined8 *)(*plVar129 + 0x40)), lVar126 == 0)
                     ) goto LAB_05d9be1c;
                  if ((*(uint *)(plVar129 + 3) & 0xfffffffe) == 0) goto LAB_05d9be18;
                  plVar129[5] = in_stack_00000098;
                  LeanTween__value(plVar129 + 5,in_stack_00000098);
                  lVar126 = lStack0000000000000070;
                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                  if (plVar129 == (long *)0x0) goto LAB_05d9be14;
                  if ((in_stack_00000068 != 0) &&
                     (lVar128 = thunk_FUN_02dd3048(in_stack_00000068,
                                                   *(undefined8 *)(*plVar129 + 0x40)), lVar128 == 0)
                     ) goto LAB_05d9be1c;
                  if (*(uint *)(plVar129 + 3) < 3) goto LAB_05d9be18;
                  plVar129[6] = in_stack_00000068;
                  LeanTween__value(plVar129 + 6,in_stack_00000068);
                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                  if (plVar129 == (long *)0x0) goto LAB_05d9be14;
                  if ((lVar126 != 0) &&
                     (lVar128 = thunk_FUN_02dd3048(lVar126,*(undefined8 *)(*plVar129 + 0x40)),
                     lVar128 == 0)) goto LAB_05d9be1c;
                  if ((*(uint *)(plVar129 + 3) & 0xfffffffc) == 0) goto LAB_05d9be18;
                  plVar129[7] = lVar126;
                  LeanTween__value(plVar129 + 7,lVar126);
                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                  if (plVar129 == (long *)0x0) goto LAB_05d9be14;
                  if ((lVar5 != 0) &&
                     (lVar126 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar129 + 0x40)),
                     lVar126 == 0)) goto LAB_05d9be1c;
                  if (*(uint *)(plVar129 + 3) < 5) goto LAB_05d9be18;
                  plVar129[8] = lVar5;
                  LeanTween__value(plVar129 + 8,lVar5);
                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                  if (plVar129 == (long *)0x0) goto LAB_05d9be14;
                  if ((lVar6 != 0) &&
                     (lVar5 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar129 + 0x40)),
                     lVar5 == 0)) goto LAB_05d9be1c;
                  if (*(uint *)(plVar129 + 3) < 6) goto LAB_05d9be18;
                  plVar129[9] = lVar6;
                  LeanTween__value(plVar129 + 9,lVar6);
                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                  if (plVar129 != (long *)0x0) {
                    if (lVar7 != 0) {
                      lVar5 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar129 + 0x40));
                      if (lVar5 == 0) goto LAB_05d9be1c;
                    }
                    if (*(uint *)(plVar129 + 3) < 7) goto LAB_05d9be18;
                    plVar129[10] = lVar7;
                    LeanTween__value(plVar129 + 10,lVar7);
                    plVar129 = *(long **)(unaff_x19 + 0x1d0);
                    if (plVar129 != (long *)0x0) {
                      if (lVar8 != 0) {
                        lVar5 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*plVar129 + 0x40));
                        if (lVar5 == 0) goto LAB_05d9be1c;
                      }
                      if ((*(uint *)(plVar129 + 3) & 0xfffffff8) == 0) goto LAB_05d9be18;
                      plVar129[0xb] = lVar8;
                      LeanTween__value(plVar129 + 0xb,lVar8);
                      plVar129 = *(long **)(unaff_x19 + 0x1d0);
                      if (plVar129 != (long *)0x0) {
                        if (lVar9 != 0) {
                          lVar5 = thunk_FUN_02dd3048(lVar9,*(undefined8 *)(*plVar129 + 0x40));
                          if (lVar5 == 0) goto LAB_05d9be1c;
                        }
                        if (*(uint *)(plVar129 + 3) < 9) goto LAB_05d9be18;
                        plVar129[0xc] = lVar9;
                        LeanTween__value(plVar129 + 0xc,lVar9);
                        plVar129 = *(long **)(unaff_x19 + 0x1d0);
                        if (plVar129 != (long *)0x0) {
                          if (lVar10 != 0) {
                            lVar5 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar129 + 0x40));
                            if (lVar5 == 0) goto LAB_05d9be1c;
                          }
                          if (*(uint *)(plVar129 + 3) < 10) goto LAB_05d9be18;
                          plVar129[0xd] = lVar10;
                          LeanTween__value(plVar129 + 0xd,lVar10);
                          plVar129 = *(long **)(unaff_x19 + 0x1d0);
                          if (plVar129 != (long *)0x0) {
                            if (lVar11 != 0) {
                              lVar5 = thunk_FUN_02dd3048(lVar11,*(undefined8 *)(*plVar129 + 0x40));
                              if (lVar5 == 0) goto LAB_05d9be1c;
                            }
                            if (*(uint *)(plVar129 + 3) < 0xb) goto LAB_05d9be18;
                            plVar129[0xe] = lVar11;
                            LeanTween__value(plVar129 + 0xe,lVar11);
                            plVar129 = *(long **)(unaff_x19 + 0x1d0);
                            if (plVar129 != (long *)0x0) {
                              if (lVar12 != 0) {
                                lVar5 = thunk_FUN_02dd3048(lVar12,*(undefined8 *)(*plVar129 + 0x40))
                                ;
                                if (lVar5 == 0) goto LAB_05d9be1c;
                              }
                              if (*(uint *)(plVar129 + 3) < 0xc) goto LAB_05d9be18;
                              plVar129[0xf] = lVar12;
                              LeanTween__value(plVar129 + 0xf,lVar12);
                              plVar129 = *(long **)(unaff_x19 + 0x1d0);
                              if (plVar129 != (long *)0x0) {
                                if (lVar13 != 0) {
                                  lVar5 = thunk_FUN_02dd3048(lVar13,*(undefined8 *)
                                                                     (*plVar129 + 0x40));
                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                }
                                if (*(uint *)(plVar129 + 3) < 0xd) goto LAB_05d9be18;
                                plVar129[0x10] = lVar13;
                                LeanTween__value(plVar129 + 0x10,lVar13);
                                plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                if (plVar129 != (long *)0x0) {
                                  if (lVar14 != 0) {
                                    lVar5 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)
                                                                       (*plVar129 + 0x40));
                                    if (lVar5 == 0) goto LAB_05d9be1c;
                                  }
                                  if (*(uint *)(plVar129 + 3) < 0xe) goto LAB_05d9be18;
                                  plVar129[0x11] = lVar14;
                                  LeanTween__value(plVar129 + 0x11,lVar14);
                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                  if (plVar129 != (long *)0x0) {
                                    if (lVar19 != 0) {
                                      lVar5 = thunk_FUN_02dd3048(lVar19,*(undefined8 *)
                                                                         (*plVar129 + 0x40));
                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                    }
                                    if (*(uint *)(plVar129 + 3) < 0xf) goto LAB_05d9be18;
                                    plVar129[0x12] = lVar19;
                                    LeanTween__value(plVar129 + 0x12,lVar19);
                                    plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                    if (plVar129 != (long *)0x0) {
                                      if (lVar20 != 0) {
                                        lVar5 = thunk_FUN_02dd3048(lVar20,*(undefined8 *)
                                                                           (*plVar129 + 0x40));
                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                      }
                                      if ((*(uint *)(plVar129 + 3) & 0xfffffff0) == 0)
                                      goto LAB_05d9be18;
                                      plVar129[0x13] = lVar20;
                                      LeanTween__value(plVar129 + 0x13,lVar20);
                                      plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                      if (plVar129 != (long *)0x0) {
                                        if (lVar21 != 0) {
                                          lVar5 = thunk_FUN_02dd3048(lVar21,*(undefined8 *)
                                                                             (*plVar129 + 0x40));
                                          if (lVar5 == 0) goto LAB_05d9be1c;
                                        }
                                        if (*(uint *)(plVar129 + 3) < 0x11) goto LAB_05d9be18;
                                        plVar129[0x14] = lVar21;
                                        LeanTween__value(plVar129 + 0x14,lVar21);
                                        plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                        if (plVar129 != (long *)0x0) {
                                          if (lVar22 != 0) {
                                            lVar5 = thunk_FUN_02dd3048(lVar22,*(undefined8 *)
                                                                               (*plVar129 + 0x40));
                                            if (lVar5 == 0) goto LAB_05d9be1c;
                                          }
                                          if (*(uint *)(plVar129 + 3) < 0x12) goto LAB_05d9be18;
                                          plVar129[0x15] = lVar22;
                                          LeanTween__value(plVar129 + 0x15,lVar22);
                                          plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                          if (plVar129 != (long *)0x0) {
                                            if (lVar23 != 0) {
                                              lVar5 = thunk_FUN_02dd3048(lVar23,*(undefined8 *)
                                                                                 (*plVar129 + 0x40))
                                              ;
                                              if (lVar5 == 0) goto LAB_05d9be1c;
                                            }
                                            if (*(uint *)(plVar129 + 3) < 0x13) goto LAB_05d9be18;
                                            plVar129[0x16] = lVar23;
                                            LeanTween__value(plVar129 + 0x16,lVar23);
                                            plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                            if (plVar129 != (long *)0x0) {
                                              if (lVar24 != 0) {
                                                lVar5 = thunk_FUN_02dd3048(lVar24,*(undefined8 *)
                                                                                   (*plVar129 + 0x40
                                                                                   ));
                                                if (lVar5 == 0) goto LAB_05d9be1c;
                                              }
                                              if (*(uint *)(plVar129 + 3) < 0x14) goto LAB_05d9be18;
                                              plVar129[0x17] = lVar24;
                                              LeanTween__value(plVar129 + 0x17,lVar24);
                                              plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                              if (plVar129 != (long *)0x0) {
                                                if (lVar25 != 0) {
                                                  lVar5 = thunk_FUN_02dd3048(lVar25,*(undefined8 *)
                                                                                     (*plVar129 +
                                                                                     0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                }
                                                if (*(uint *)(plVar129 + 3) < 0x15)
                                                goto LAB_05d9be18;
                                                plVar129[0x18] = lVar25;
                                                LeanTween__value(plVar129 + 0x18,lVar25);
                                                plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                if (plVar129 != (long *)0x0) {
                                                  if (lVar26 != 0) {
                                                    lVar5 = thunk_FUN_02dd3048(lVar26,*(undefined8 *
                                                                                       )(*plVar129 +
                                                                                        0x40));
                                                    if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x16)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x19] = lVar26;
                                                  LeanTween__value(plVar129 + 0x19,lVar26);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar27 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar27,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x17)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x1a] = lVar27;
                                                  LeanTween__value(plVar129 + 0x1a,lVar27);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar28 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar28,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x18)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x1b] = lVar28;
                                                  LeanTween__value(plVar129 + 0x1b,lVar28);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar29 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar29,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x19)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x1c] = lVar29;
                                                  LeanTween__value(plVar129 + 0x1c,lVar29);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar30 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar30,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x1a)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x1d] = lVar30;
                                                  LeanTween__value(plVar129 + 0x1d,lVar30);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar31 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar31,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x1b)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x1e] = lVar31;
                                                  LeanTween__value(plVar129 + 0x1e,lVar31);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar32 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar32,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x1c)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x1f] = lVar32;
                                                  LeanTween__value(plVar129 + 0x1f,lVar32);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar33 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar33,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x1d)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x20] = lVar33;
                                                  LeanTween__value(plVar129 + 0x20,lVar33);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar34 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar34,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x1e)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x21] = lVar34;
                                                  LeanTween__value(plVar129 + 0x21,lVar34);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar35 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar35,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x1f)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x22] = lVar35;
                                                  LeanTween__value(plVar129 + 0x22,lVar35);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar36 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar36,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if ((*(uint *)(plVar129 + 3) & 0xffffffe0) == 0)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x23] = lVar36;
                                                  LeanTween__value(plVar129 + 0x23,lVar36);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar37 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar37,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x21)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x24] = lVar37;
                                                  LeanTween__value(plVar129 + 0x24,lVar37);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar38 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar38,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x22)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x25] = lVar38;
                                                  LeanTween__value(plVar129 + 0x25,lVar38);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar39 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar39,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x23)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x26] = lVar39;
                                                  LeanTween__value(plVar129 + 0x26,lVar39);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar40 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar40,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x24)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x27] = lVar40;
                                                  LeanTween__value(plVar129 + 0x27,lVar40);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar41 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar41,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x25)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x28] = lVar41;
                                                  LeanTween__value(plVar129 + 0x28,lVar41);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar42 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar42,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x26)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x29] = lVar42;
                                                  LeanTween__value(plVar129 + 0x29,lVar42);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar43 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar43,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x27)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x2a] = lVar43;
                                                  LeanTween__value(plVar129 + 0x2a,lVar43);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar44 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar44,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x28)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x2b] = lVar44;
                                                  LeanTween__value(plVar129 + 0x2b,lVar44);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar45 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar45,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x29)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x2c] = lVar45;
                                                  LeanTween__value(plVar129 + 0x2c,lVar45);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar46 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar46,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x2a)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x2d] = lVar46;
                                                  LeanTween__value(plVar129 + 0x2d,lVar46);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar47 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar47,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x2b)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x2e] = lVar47;
                                                  LeanTween__value(plVar129 + 0x2e,lVar47);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar48 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar48,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x2c)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x2f] = lVar48;
                                                  LeanTween__value(plVar129 + 0x2f,lVar48);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar49 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar49,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x2d)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x30] = lVar49;
                                                  LeanTween__value(plVar129 + 0x30,lVar49);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar50 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar50,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x2e)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x31] = lVar50;
                                                  LeanTween__value(plVar129 + 0x31,lVar50);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar51 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar51,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x2f)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x32] = lVar51;
                                                  LeanTween__value(plVar129 + 0x32,lVar51);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar52 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar52,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x30)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x33] = lVar52;
                                                  LeanTween__value(plVar129 + 0x33,lVar52);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar53 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar53,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x31)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x34] = lVar53;
                                                  LeanTween__value(plVar129 + 0x34,lVar53);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar54 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar54,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x32)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x35] = lVar54;
                                                  LeanTween__value(plVar129 + 0x35,lVar54);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar55 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar55,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x33)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x36] = lVar55;
                                                  LeanTween__value(plVar129 + 0x36,lVar55);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar56 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar56,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x34)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x37] = lVar56;
                                                  LeanTween__value(plVar129 + 0x37,lVar56);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar58 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar58,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x35)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x38] = lVar58;
                                                  LeanTween__value(plVar129 + 0x38,lVar58);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar59 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar59,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x36)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x39] = lVar59;
                                                  LeanTween__value(plVar129 + 0x39,lVar59);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar61 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar61,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x37)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x3a] = lVar61;
                                                  LeanTween__value(plVar129 + 0x3a,lVar61);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar62 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar62,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x38)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x3b] = lVar62;
                                                  LeanTween__value(plVar129 + 0x3b,lVar62);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if ((lVar64 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar64,*(
                                                  undefined8 *)(*plVar129 + 0x40)), lVar5 == 0))
                                                  goto LAB_05d9be1c;
                                                  if (*(uint *)(plVar129 + 3) < 0x39)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x3c] = lVar64;
                                                  LeanTween__value(plVar129 + 0x3c,lVar64);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar65 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar65,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x3a)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x3d] = lVar65;
                                                  LeanTween__value(plVar129 + 0x3d,lVar65);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar66 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar66,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x3b)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x3e] = lVar66;
                                                  LeanTween__value(plVar129 + 0x3e,lVar66);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (unaff_x24 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(unaff_x24,
                                                                                 *(undefined8 *)
                                                                                  (*plVar129 + 0x40)
                                                                                );
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar129 + 3) < 0x3c)
                                                    goto LAB_05d9be18;
                                                    plVar129[0x3f] = unaff_x24;
                                                    LeanTween__value(plVar129 + 0x3f,unaff_x24);
                                                    plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar129 != (long *)0x0) {
                                                      if (lVar17 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(lVar17,*(
                                                  undefined8 *)(*plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x3d)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x40] = lVar17;
                                                  LeanTween__value(plVar129 + 0x40,lVar17);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar18 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar18,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x3e)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x41] = lVar18;
                                                  LeanTween__value(plVar129 + 0x41,lVar18);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar15 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar15,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x3f)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x42] = lVar15;
                                                  LeanTween__value(plVar129 + 0x42,lVar15);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar16 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar16,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if ((*(uint *)(plVar129 + 3) & 0xffffffc0) == 0)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x43] = lVar16;
                                                  LeanTween__value(plVar129 + 0x43,lVar16);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar67 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar67,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x41)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x44] = lVar67;
                                                  LeanTween__value(plVar129 + 0x44,lVar67);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar68 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar68,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x42)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x45] = lVar68;
                                                  LeanTween__value(plVar129 + 0x45,lVar68);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar69 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar69,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x43)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x46] = lVar69;
                                                  LeanTween__value(plVar129 + 0x46,lVar69);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar70 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar70,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x44)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x47] = lVar70;
                                                  LeanTween__value(plVar129 + 0x47,lVar70);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar71 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar71,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x45)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x48] = lVar71;
                                                  LeanTween__value(plVar129 + 0x48,lVar71);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar72 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar72,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x46)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x49] = lVar72;
                                                  LeanTween__value(plVar129 + 0x49,lVar72);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar73 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar73,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x47)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x4a] = lVar73;
                                                  LeanTween__value(plVar129 + 0x4a,lVar73);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar74 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar74,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x48)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x4b] = lVar74;
                                                  LeanTween__value(plVar129 + 0x4b,lVar74);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar75 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar75,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x49)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x4c] = lVar75;
                                                  LeanTween__value(plVar129 + 0x4c,lVar75);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar76 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar76,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x4a)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x4d] = lVar76;
                                                  LeanTween__value(plVar129 + 0x4d,lVar76);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar77 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar77,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x4b)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x4e] = lVar77;
                                                  LeanTween__value(plVar129 + 0x4e,lVar77);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar78 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar78,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x4c)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x4f] = lVar78;
                                                  LeanTween__value(plVar129 + 0x4f,lVar78);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar79 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar79,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x4d)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x50] = lVar79;
                                                  LeanTween__value(plVar129 + 0x50,lVar79);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar80 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar80,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x4e)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x51] = lVar80;
                                                  LeanTween__value(plVar129 + 0x51,lVar80);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar81 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar81,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x4f)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x52] = lVar81;
                                                  LeanTween__value(plVar129 + 0x52,lVar81);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar82 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar82,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x50)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x53] = lVar82;
                                                  LeanTween__value(plVar129 + 0x53,lVar82);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar83 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar83,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x51)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x54] = lVar83;
                                                  LeanTween__value(plVar129 + 0x54,lVar83);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar84 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar84,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x52)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x55] = lVar84;
                                                  LeanTween__value(plVar129 + 0x55,lVar84);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar85 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar85,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x53)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x56] = lVar85;
                                                  LeanTween__value(plVar129 + 0x56,lVar85);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar95 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar95,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x54)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x57] = lVar95;
                                                  LeanTween__value(plVar129 + 0x57,lVar95);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar86 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar86,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x55)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x58] = lVar86;
                                                  LeanTween__value(plVar129 + 0x58,lVar86);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar87 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar87,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x56)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x59] = lVar87;
                                                  LeanTween__value(plVar129 + 0x59,lVar87);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar88 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar88,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x57)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x5a] = lVar88;
                                                  LeanTween__value(plVar129 + 0x5a,lVar88);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar89 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar89,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x58)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x5b] = lVar89;
                                                  LeanTween__value(plVar129 + 0x5b,lVar89);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar90 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar90,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x59)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x5c] = lVar90;
                                                  LeanTween__value(plVar129 + 0x5c,lVar90);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar91 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar91,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x5a)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x5d] = lVar91;
                                                  LeanTween__value(plVar129 + 0x5d,lVar91);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar92 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar92,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x5b)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x5e] = lVar92;
                                                  LeanTween__value(plVar129 + 0x5e,lVar92);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar93 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar93,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x5c)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x5f] = lVar93;
                                                  LeanTween__value(plVar129 + 0x5f,lVar93);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar94 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar94,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x5d)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x60] = lVar94;
                                                  LeanTween__value(plVar129 + 0x60,lVar94);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar96 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar96,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x5e)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x61] = lVar96;
                                                  LeanTween__value(plVar129 + 0x61,lVar96);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar97 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar97,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x5f)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x62] = lVar97;
                                                  LeanTween__value(plVar129 + 0x62,lVar97);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar98 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar98,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x60)
                                                  goto LAB_05d9be18;
                                                  plVar129[99] = lVar98;
                                                  LeanTween__value(plVar129 + 99,lVar98);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar99 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar99,*(undefined8
                                                                                          *)(*
                                                  plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x61)
                                                  goto LAB_05d9be18;
                                                  plVar129[100] = lVar99;
                                                  LeanTween__value(plVar129 + 100,lVar99);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar100 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar100,*(
                                                  undefined8 *)(*plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x62)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x65] = lVar100;
                                                  LeanTween__value(plVar129 + 0x65,lVar100);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar101 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar101,*(
                                                  undefined8 *)(*plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 99)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x66] = lVar101;
                                                  LeanTween__value(plVar129 + 0x66,lVar101);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar102 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar102,*(
                                                  undefined8 *)(*plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 100)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x67] = lVar102;
                                                  LeanTween__value(plVar129 + 0x67,lVar102);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar103 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar103,*(
                                                  undefined8 *)(*plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x65)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x68] = lVar103;
                                                  LeanTween__value(plVar129 + 0x68,lVar103);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar104 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar104,*(
                                                  undefined8 *)(*plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x66)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x69] = lVar104;
                                                  LeanTween__value(plVar129 + 0x69,lVar104);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar105 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar105,*(
                                                  undefined8 *)(*plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x67)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x6a] = lVar105;
                                                  LeanTween__value(plVar129 + 0x6a,lVar105);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar106 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar106,*(
                                                  undefined8 *)(*plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x68)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x6b] = lVar106;
                                                  LeanTween__value(plVar129 + 0x6b,lVar106);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar107 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar107,*(
                                                  undefined8 *)(*plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x69)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x6c] = lVar107;
                                                  LeanTween__value(plVar129 + 0x6c,lVar107);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar108 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar108,*(
                                                  undefined8 *)(*plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x6a)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x6d] = lVar108;
                                                  LeanTween__value(plVar129 + 0x6d,lVar108);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar109 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar109,*(
                                                  undefined8 *)(*plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x6b)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x6e] = lVar109;
                                                  LeanTween__value(plVar129 + 0x6e,lVar109);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar110 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar110,*(
                                                  undefined8 *)(*plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x6c)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x6f] = lVar110;
                                                  LeanTween__value(plVar129 + 0x6f,lVar110);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar111 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar111,*(
                                                  undefined8 *)(*plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x6d)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x70] = lVar111;
                                                  LeanTween__value(plVar129 + 0x70,lVar111);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar112 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar112,*(
                                                  undefined8 *)(*plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x6e)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x71] = lVar112;
                                                  LeanTween__value(plVar129 + 0x71,lVar112);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar113 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar113,*(
                                                  undefined8 *)(*plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x70)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x73] = lVar113;
                                                  LeanTween__value(plVar129 + 0x73,lVar113);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar114 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar114,*(
                                                  undefined8 *)(*plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x71)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x74] = lVar114;
                                                  LeanTween__value(plVar129 + 0x74,lVar114);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar115 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar115,*(
                                                  undefined8 *)(*plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x72)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x75] = lVar115;
                                                  LeanTween__value(plVar129 + 0x75,lVar115);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if (lVar116 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(lVar116,*(
                                                  undefined8 *)(*plVar129 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar129 + 3) < 0x73)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x76] = lVar116;
                                                  LeanTween__value(plVar129 + 0x76,lVar116);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if ((lVar117 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar117,*(
                                                  undefined8 *)(*plVar129 + 0x40)), lVar5 == 0))
                                                  goto LAB_05d9be1c;
                                                  if (*(uint *)(plVar129 + 3) < 0x74)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x77] = lVar117;
                                                  LeanTween__value(plVar129 + 0x77,lVar117);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if ((lVar118 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar118,*(
                                                  undefined8 *)(*plVar129 + 0x40)), lVar5 == 0))
                                                  goto LAB_05d9be1c;
                                                  if (*(uint *)(plVar129 + 3) < 0x75)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x78] = lVar118;
                                                  LeanTween__value(plVar129 + 0x78,lVar118);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if ((lVar119 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar119,*(
                                                  undefined8 *)(*plVar129 + 0x40)), lVar5 == 0))
                                                  goto LAB_05d9be1c;
                                                  if (*(uint *)(plVar129 + 3) < 0x76)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x79] = lVar119;
                                                  LeanTween__value(plVar129 + 0x79,lVar119);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if ((lVar120 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar120,*(
                                                  undefined8 *)(*plVar129 + 0x40)), lVar5 == 0))
                                                  goto LAB_05d9be1c;
                                                  if (*(uint *)(plVar129 + 3) < 0x77)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x7a] = lVar120;
                                                  LeanTween__value(plVar129 + 0x7a,lVar120);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if ((lVar121 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar121,*(
                                                  undefined8 *)(*plVar129 + 0x40)), lVar5 == 0))
                                                  goto LAB_05d9be1c;
                                                  if (*(uint *)(plVar129 + 3) < 0x78)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x7b] = lVar121;
                                                  LeanTween__value(plVar129 + 0x7b,lVar121);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if ((lVar122 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar122,*(
                                                  undefined8 *)(*plVar129 + 0x40)), lVar5 == 0))
                                                  goto LAB_05d9be1c;
                                                  if (*(uint *)(plVar129 + 3) < 0x79)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x7c] = lVar122;
                                                  LeanTween__value(plVar129 + 0x7c,lVar122);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if ((lVar123 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar123,*(
                                                  undefined8 *)(*plVar129 + 0x40)), lVar5 == 0))
                                                  goto LAB_05d9be1c;
                                                  if (*(uint *)(plVar129 + 3) < 0x7a)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x7d] = lVar123;
                                                  LeanTween__value(plVar129 + 0x7d,lVar123);
                                                  plVar129 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar129 != (long *)0x0) {
                                                    if ((lVar124 != 0) &&
                                                       (lVar5 = thunk_FUN_02dd3048(lVar124,*(
                                                  undefined8 *)(*plVar129 + 0x40)), lVar5 == 0))
                                                  goto LAB_05d9be1c;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_List<IXRHoverInteractable>_get_Item__
                                                  ;
                                                  puVar1 = PTR_DAT_06a146e0;
                                                  if (*(uint *)(plVar129 + 3) < 0x7b)
                                                  goto LAB_05d9be18;
                                                  plVar129[0x7e] = lVar124;
                                                  LeanTween__value(plVar129 + 0x7e,lVar124);
                                                  *(undefined8 *)(unaff_x19 + 0x188) =
                                                       in_stack_00000020;
                                                  LeanTween__value(unaff_x19 + 0x188);
                                                  *(undefined8 *)(unaff_x19 + 400) = uVar57;
                                                  LeanTween__value(unaff_x19 + 400);
                                                  *(undefined8 *)(unaff_x19 + 0x198) = uVar63;
                                                  LeanTween__value(unaff_x19 + 0x198);
                                                  *(undefined8 *)(unaff_x19 + 0x1a0) = uVar60;
                                                  LeanTween__value(unaff_x19 + 0x1a0);
                                                  *(undefined8 *)(unaff_x19 + 0x1a8) = uVar125;
                                                  LeanTween__value(unaff_x19 + 0x1a8);
                                                  uVar57 = FUN_02d966a4(*(undefined8 *)puVar1,0x7f);
                                                  FUN_05411dc0(uVar57,*(undefined8 *)puVar2,0);
                                                  puVar4 = 
                                                  Method_System_Collections_Generic_List<IXRHoverInteractor>_get_Count__
                                                  ;
                                                  puVar3 = 
                                                  Method_System_Collections_Generic_List<IXRHoverInteractable>_get_Count__
                                                  ;
                                                  puVar2 = PTR_DAT_06a1a490;
                                                  puVar1 = PTR_DAT_069fc2e8;
                                                  if (in_stack_000005a8 != 0) {
                                                    *(undefined8 *)(in_stack_000005a8 + 0x170) =
                                                         uVar57;
                                                    LeanTween__value(in_stack_000005a8 + 0x170,
                                                                     uVar57);
                                                    uVar57 = FUN_02d966a4(*(undefined8 *)puVar1,
                                                                          0x707);
                                                    FUN_05411dc0(uVar57,*(undefined8 *)puVar4,0);
                                                    uVar60 = FUN_02d966a4(*(undefined8 *)puVar2,0x83
                                                                         );
                                                    FUN_05411dc0(uVar60,*(undefined8 *)puVar3,0);
                                                    FUN_05d979a8(&stack0x000005a8,uVar57,uVar60,0);
                                                    FUN_05d97af4(&stack0x000005a8,0);
                                                    return;
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
    }
  }
LAB_05d9be14:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


