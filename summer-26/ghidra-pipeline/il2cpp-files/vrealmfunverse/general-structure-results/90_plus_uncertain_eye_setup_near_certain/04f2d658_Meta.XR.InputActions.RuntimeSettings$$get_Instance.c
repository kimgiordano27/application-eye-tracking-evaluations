/*
FUNCTION_NAME: Meta.XR.InputActions.RuntimeSettings$$get_Instance
ENTRY_POINT: 04f2d658
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04f2dfac) */
/* WARNING: Removing unreachable block (ram,0x04f2e054) */
/* WARNING: Removing unreachable block (ram,0x04f2e070) */
/* WARNING: Removing unreachable block (ram,0x04f2ddac) */

void Meta_XR_InputActions_RuntimeSettings__get_Instance(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000048;
  
  FUN_02b3c81c();
  FUN_02b3c81c(System_Collections_Generic_Dictionary<int,_MeshBlit>_TypeInfo);
  FUN_02b3c81c(System_Collections_Generic_Dictionary<int,_OVRGLTFAnimatinonNode>_TypeInfo);
  FUN_02b3c81c(
              System_Collections_Generic_Dictionary<int,_OVRGLTFAnimationNodeMorphTargetHandler>_TypeInfo
              );
                    /* try { // try from 04f2d680 to 0502d683 has its CatchHandler @ 04f2d898 */
                    /* try { // try from 04f2d684 to 0502d68f has its CatchHandler @ 04f2d8b4 */
  FUN_02b3c81c(System_Collections_Generic_Dictionary<int,_OVRPointerEventData>_TypeInfo);
  FUN_02b3c81c(System_Collections_Generic_Dictionary<int,_object>_TypeInfo);
  FUN_02b3c81c(System_Collections_Generic_Dictionary<int,_Panel>_TypeInfo);
                    /* try { // try from 04f2d6a4 to 0502d6a7 has its CatchHandler @ 04f2d8a4 */
  FUN_02b3c81c(PTR_DAT_06312a80);
                    /* try { // try from 04f2d6b4 to 0502d6bb has its CatchHandler @ 04f2d89c */
  *(undefined1 *)(unaff_x20 + 0x93e) = 1;
  puVar2 = 
  System_Collections_Generic_Dictionary<int,_OVRGLTFAnimationNodeMorphTargetHandler>_TypeInfo;
  in_stack_00000048 = (long *)0x0;
                    /* try { // try from 04f2d6cc to 0502d6e3 has its CatchHandler @ 04f2d8b8 */
  in_stack_00000030 = (long *)0x0;
  in_stack_00000038 = (long *)0x0;
  if (DAT_066c1d97 == '\0') {
    FUN_02b3c81c(PTR_DAT_06312438);
    DAT_066c1d97 = '\x01';
  }
                    /* try { // try from 04f2d6e8 to 0502d6f3 has its CatchHandler @ 04f2d8b0 */
  uVar19 = **(undefined8 **)(*(long *)PTR_DAT_06312438 + 0xb8);
  fVar20 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_06312438 + 0xb8) + 1);
  uVar7 = FUN_04f2e140();
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar10);
    lVar10 = *(long *)puVar2;
  }
  puVar3 = System_Collections_Generic_Dictionary<int,_IInitializablePackage>_TypeInfo;
  puVar12 = *(undefined8 **)(lVar10 + 0xb8);
  lVar15 = puVar12[1];
                    /* try { // try from 04f2d734 to 0502d737 has its CatchHandler @ 04f2d894 */
  if (lVar15 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar10);
      puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar16 = *puVar12;
    lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                 System_Collections_Generic_Dictionary<int,_IXRInteractable>_TypeInfo
                               );
    FUN_049bbe88(lVar15,uVar16,
                 *(undefined8 *)System_Collections_Generic_Dictionary<int,_MeshBlit>_TypeInfo,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar8 = lVar15;
    thunk_FUN_02bb0e9c(plVar8,lVar15);
  }
  uVar7 = FUN_031b8ab4(uVar7,lVar15,*(undefined8 *)puVar3);
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar10);
    lVar10 = *(long *)puVar2;
  }
  puVar3 = System_Collections_Generic_Dictionary<int,_IMGUITextHandle>_TypeInfo;
  puVar12 = *(undefined8 **)(lVar10 + 0xb8);
  lVar15 = puVar12[3];
  if (lVar15 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar10);
      puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar16 = *puVar12;
    lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                 System_Collections_Generic_Dictionary<int,_IServiceComponent>_TypeInfo
                               );
    FUN_049c10fc(lVar15,uVar16,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<int,_OVRGLTFAnimatinonNode>_TypeInfo,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar8 = lVar15;
    thunk_FUN_02bb0e9c(plVar8,lVar15);
  }
  plVar8 = (long *)FUN_031bf830(uVar7,lVar15,*(undefined8 *)puVar3);
  if (plVar8 != (long *)0x0) {
    lVar10 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<int,_long>_TypeInfo) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04f2d89c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_02b7654c(plVar8,*(long *)System_Collections_Generic_Dictionary<int,_long>_TypeInfo
                           ,0);
LAB_04f2d89c:
    plVar8 = (long *)(*(code *)*puVar12)(plVar8,puVar12[1]);
    puVar5 = System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo;
    puVar4 = PTR_DAT_063151a0;
    puVar3 = PTR_DAT_06312cd8;
    puVar2 = PTR_DAT_06312520;
    in_stack_00000028 = &stack0x00000048;
    in_stack_00000020 = 0;
joined_r0x04f2d8b4:
    in_stack_00000048 = plVar8;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar10 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06312f90) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04f2d938;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar12 = (undefined8 *)FUN_02b7654c(plVar8,*(long *)PTR_DAT_06312f90,0);
LAB_04f2d938:
    uVar13 = (*(code *)*puVar12)(plVar8,puVar12[1]);
    plVar8 = in_stack_00000048;
    if ((uVar13 & 1) != 0) {
      if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar10 = *in_stack_00000048;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)System_Collections_Generic_Dictionary<int,_Material>_TypeInfo) {
            puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04f2d9a4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_02b7654c(in_stack_00000048,
                             *(long *)System_Collections_Generic_Dictionary<int,_Material>_TypeInfo,
                             0);
LAB_04f2d9a4:
      lVar10 = (*(code *)*puVar12)(plVar8,puVar12[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      plVar8 = *(long **)(lVar10 + 0x18);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar15 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)System_Collections_Generic_Dictionary<Guid,_OVRSceneRoom>_TypeInfo) {
            puVar12 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04f2da14;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_02b7654c(plVar8,*(long *)
                                     System_Collections_Generic_Dictionary<Guid,_OVRSceneRoom>_TypeInfo
                             ,0);
LAB_04f2da14:
      plVar8 = (long *)(*(code *)*puVar12)(plVar8,puVar12[1]);
      uVar7 = uVar19;
      fVar18 = fVar20;
      do {
        in_stack_00000038 = plVar8;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar15 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06312f90) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_04f2da94;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar12 = (undefined8 *)FUN_02b7654c(plVar8,*(long *)PTR_DAT_06312f90,0);
LAB_04f2da94:
        uVar13 = (*(code *)*puVar12)(plVar8,puVar12[1]);
        plVar8 = in_stack_00000038;
        if ((uVar13 & 1) == 0) goto LAB_04f2dc14;
        if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar15 = *in_stack_00000038;
        uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)System_Collections_Generic_Dictionary<Guid,_OVRSpatialAnchor>_TypeInfo) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_04f2db00;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar12 = (undefined8 *)
                  FUN_02b7654c(in_stack_00000038,
                               *(long *)
                                System_Collections_Generic_Dictionary<Guid,_OVRSpatialAnchor>_TypeInfo
                               ,0);
LAB_04f2db00:
        uVar9 = (*(code *)*puVar12)(plVar8,puVar12[1]);
        uVar16 = *(undefined8 *)(unaff_x19 + 0x60);
        uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        lVar15 = FUN_032404a4(uVar16,uVar1,*(undefined8 *)puVar4);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar15 = FUN_031d80b0(lVar15,*(undefined8 *)puVar5);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar16 = *(undefined8 *)(unaff_x19 + 0x28);
        uVar6 = *(undefined4 *)(lVar10 + 0x10);
        *(undefined8 *)(lVar15 + 0x68) = uVar9;
        *(undefined1 *)(lVar15 + 0x70) = 1;
        *(undefined4 *)(lVar15 + 100) = uVar6;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar15 + 0x68),uVar9);
        *(undefined8 *)(lVar15 + 0x50) = uVar16;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar15 + 0x50),uVar16);
        lVar15 = FUN_05c89340(lVar15,0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_05c9c840(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                     *(undefined4 *)(unaff_x19 + 0x90),lVar15,0);
        if (DAT_066c1d9a == '\0') {
          FUN_02b3c81c(puVar3);
          DAT_066c1d9a = '\x01';
        }
        puVar11 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
        FUN_05c9c3b0(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar15,0);
        fVar17 = (float)((ulong)uVar7 >> 0x20);
        FUN_05c9b4fc(uVar7,fVar17,fVar18,lVar15,0);
        uVar7 = CONCAT44(fVar17 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x7c) >> 0x20),
                         (float)uVar7 + (float)*(undefined8 *)(unaff_x19 + 0x7c));
        fVar18 = fVar18 + *(float *)(unaff_x19 + 0x84);
        plVar8 = in_stack_00000038;
      } while( true );
    }
    plVar8 = (long *)*in_stack_00000028;
    if (plVar8 == (long *)0x0) goto LAB_04f2dd9c;
    lVar10 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 == 0) goto LAB_04f2dd74;
    piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    goto LAB_04f2dd5c;
  }
  goto LAB_04f2e068;
LAB_04f2dc14:
  if (in_stack_00000038 != (long *)0x0) {
    lVar10 = *in_stack_00000038;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04f2dc78;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar12 = (undefined8 *)FUN_02b7654c(in_stack_00000038,*(long *)PTR_DAT_06312f78,0);
LAB_04f2dc78:
    (*(code *)*puVar12)(plVar8,puVar12[1]);
  }
  uVar19 = CONCAT44((float)((ulong)uVar19 >> 0x20) +
                    (float)((ulong)*(undefined8 *)(unaff_x19 + 0x70) >> 0x20),
                    (float)uVar19 + (float)*(undefined8 *)(unaff_x19 + 0x70));
  fVar20 = fVar20 + *(float *)(unaff_x19 + 0x78);
  plVar8 = in_stack_00000048;
  goto joined_r0x04f2d8b4;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_04f2dd5c:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_04f2dd90;
    }
  }
LAB_04f2dd74:
  puVar12 = (undefined8 *)FUN_02b7654c(plVar8,*(long *)PTR_DAT_06312f78,0);
LAB_04f2dd90:
  (*(code *)*puVar12)(plVar8,puVar12[1]);
LAB_04f2dd9c:
  if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (plVar8 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x40), plVar8 != (long *)0x0)) {
    lVar10 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    uVar19 = *(undefined8 *)PTR_DAT_06312a80;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<int,_LogEntry>_TypeInfo) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04f2de20;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_02b7654c(plVar8,*(long *)
                                   System_Collections_Generic_Dictionary<int,_LogEntry>_TypeInfo,0);
LAB_04f2de20:
    puVar2 = System_Collections_Generic_Dictionary<int,_ManualResetEvent>_TypeInfo;
    in_stack_00000030 = (long *)(*(code *)*puVar12)(plVar8,puVar12[1]);
    in_stack_00000028 = &stack0x00000030;
    in_stack_00000020 = 0;
    do {
      plVar8 = in_stack_00000030;
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar10 = *in_stack_00000030;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06312f90) {
            puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04f2dea0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)FUN_02b7654c(in_stack_00000030,*(long *)PTR_DAT_06312f90,0);
LAB_04f2dea0:
      uVar13 = (*(code *)*puVar12)(plVar8,puVar12[1]);
      plVar8 = in_stack_00000030;
      if ((uVar13 & 1) == 0) {
        if (in_stack_00000030 == (long *)0x0) goto LAB_04f2dfa0;
        lVar10 = *in_stack_00000030;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 == 0) goto LAB_04f2df78;
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_04f2df60;
      }
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar10 = *in_stack_00000030;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04f2df04;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)FUN_02b7654c(in_stack_00000030,*(long *)puVar2,0);
LAB_04f2df04:
      lVar10 = (*(code *)*puVar12)(plVar8,puVar12[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar19 = FUN_04bffdac(uVar19,*(undefined8 *)(lVar10 + 0x18),0);
    } while( true );
  }
  goto LAB_04f2e068;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_04f2df60:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto FUN_04f2df94;
    }
  }
LAB_04f2df78:
  puVar12 = (undefined8 *)FUN_02b7654c(in_stack_00000030,*(long *)PTR_DAT_06312f78,0);
FUN_04f2df94:
  (*(code *)*puVar12)(plVar8,puVar12[1]);
LAB_04f2dfa0:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar8 = *(long **)(unaff_x19 + 0x98);
    uVar6 = FUN_04f26774(*(long *)(unaff_x19 + 0x30),0);
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,uVar6);
    uVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)System_Collections_Generic_Dictionary<int,_int>_TypeInfo,
                       &stack0x00000020);
    uVar19 = FUN_04c0af28(*(undefined8 *)System_Collections_Generic_Dictionary<int,_Panel>_TypeInfo,
                          uVar7,uVar19,0);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x558))(plVar8,uVar19,*(undefined8 *)(*plVar8 + 0x560));
      return;
    }
  }
LAB_04f2e068:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


