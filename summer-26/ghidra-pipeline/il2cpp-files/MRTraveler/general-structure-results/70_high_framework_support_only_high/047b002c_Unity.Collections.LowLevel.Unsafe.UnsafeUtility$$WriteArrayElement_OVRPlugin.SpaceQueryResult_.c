/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$WriteArrayElement<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 047b002c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x047b0658) */
/* WARNING: Removing unreachable block (ram,0x047b06cc) */
/* WARNING: Removing unreachable block (ram,0x047b07b4) */
/* WARNING: Removing unreachable block (ram,0x047b07a0) */

undefined8
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_SpaceQueryResult>(void)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long in_x3;
  long *plVar14;
  int *piVar15;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar16;
  long unaff_x25;
  long unaff_x29;
  
  plVar14 = *(long **)(in_x3 + 0x38);
  if (plVar14 == (long *)0x0) {
    FUN_03c8f898(PTR_DAT_08e6a288);
    FUN_03c8f898(PTR_DAT_08e82068);
    FUN_03c8f898(PTR_DAT_08e82048);
    FUN_03c8f898(PTR_DAT_08e6a290);
    FUN_03c8f898(PTR_DAT_08e82050);
    FUN_03c8f898(PTR_DAT_08e706b8);
    FUN_03c8f898(PTR_DAT_08e82070);
    FUN_03c8f898(PTR_DAT_08e82078);
    FUN_03c8f898(PTR_DAT_08e82080);
    FUN_03c8f898(PTR_DAT_08e82088);
    FUN_03c8f898(PTR_DAT_08e82058);
    FUN_03c8f898(PTR_DAT_08e82060);
    plVar14 = *(long **)(unaff_x21 + 0x38);
    if (plVar14 == (long *)0x0) {
      FUN_03cf12a0();
      plVar14 = *(long **)(unaff_x21 + 0x38);
    }
  }
  lVar10 = *plVar14;
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_03cf1244();
  }
  iVar2 = *(int *)(lVar10 + 0xfc);
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    uVar11 = FUN_07f301e4(*(long *)(unaff_x20 + 0x10),0);
    if ((uVar11 & 1) == 0) {
      if (unaff_w19 != 1) {
        plVar14 = *(long **)(unaff_x20 + 0x58);
      }
      else {
        uVar16 = *(undefined8 *)(unaff_x20 + 0x10);
        plVar14 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e82058);
        FUN_07f5836c(plVar14,uVar16,0);
      }
    }
    else if (unaff_w19 != 1) {
      plVar14 = *(long **)(unaff_x20 + 0x60);
    }
    else {
      uVar16 = *(undefined8 *)(unaff_x20 + 0x10);
      plVar14 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e82060);
      FUN_07f581d8(plVar14,uVar16,0);
    }
    puVar6 = PTR_DAT_08e82050;
    if (plVar14 != (long *)0x0) {
      lVar10 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08e82050) {
            puVar12 = (undefined8 *)(lVar10 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto 
            Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<TransformAccessJob_TransformData>
            ;
          }
          uVar11 = uVar11 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar11 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar14,*(long *)PTR_DAT_08e82050,1);
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<TransformAccessJob_TransformData>
      :
      (*(code *)*puVar12)(plVar14,puVar12[1]);
      if ((*(long *)(unaff_x20 + 0x10) != 0) &&
         (plVar13 = (long *)FUN_07f30208(*(long *)(unaff_x20 + 0x10),0), plVar13 != (long *)0x0)) {
        lVar10 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08e706b8) {
              puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_047b0258;
            }
            uVar11 = uVar11 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar11 != 0);
        }
        puVar12 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)PTR_DAT_08e706b8,0);
LAB_047b0258:
        uVar8 = (*(code *)*puVar12)(plVar13,puVar12[1]);
        uVar9 = FUN_07dd3258(2,0);
        FUN_0564bc48(unaff_x29 + -0x28,uVar8,uVar9,*(undefined8 *)PTR_DAT_08e82088);
        plVar13 = *(long **)(unaff_x21 + 0x38);
        lVar10 = *plVar13;
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_03cf1244();
          plVar13 = *(long **)(unaff_x21 + 0x38);
        }
        lVar1 = *(long *)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*plVar13 + 0x28)) {
          lVar1 = unaff_x29 + -0x18;
        }
        FUN_03c90414(lVar10,plVar13[1],
                     (long)&stack0x00000000 - ((ulong)(iVar2 + 0x10) + 0xf & 0x1fffffff0),lVar1,0,
                     unaff_x29 + -0x10);
        puVar7 = PTR_DAT_08e82070;
        puVar5 = PTR_DAT_08e82048;
        puVar4 = PTR_DAT_08e6a290;
        plVar13 = *(long **)(unaff_x29 + -0x10);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        do {
          lVar10 = *plVar13;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_047b033c;
              }
              uVar11 = uVar11 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar11 != 0);
          }
          puVar12 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)puVar4,0);
LAB_047b033c:
          uVar11 = (*(code *)*puVar12)(plVar13,puVar12[1]);
          puVar3 = PTR_DAT_08e6a288;
          if ((uVar11 & 1) == 0)
          goto 
          Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_144>
          ;
          lVar10 = *plVar13;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
                puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_047b0398;
              }
              uVar11 = uVar11 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar11 != 0);
          }
          puVar12 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)puVar5,0);
LAB_047b0398:
          uVar16 = (*(code *)*puVar12)(plVar13,puVar12[1]);
          FUN_0564be68(unaff_x29 + -0x28,uVar16,*(undefined8 *)puVar7);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();

  Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_144>
  :
  if (plVar13 != (long *)0x0) {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_047b0414;
        }
        uVar11 = uVar11 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar11 != 0);
    }
    puVar12 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)PTR_DAT_08e6a288,0);
LAB_047b0414:
    (*(code *)*puVar12)(plVar13,puVar12[1]);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  plVar13 = (long *)FUN_07f30208(*(long *)(unaff_x20 + 0x10),0);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08e82068) {
        puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_047b0490;
      }
      uVar11 = uVar11 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar11 != 0);
  }
  puVar12 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)PTR_DAT_08e82068,0);
LAB_047b0490:
  plVar13 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
  puVar7 = PTR_DAT_08e82078;
  puVar5 = PTR_DAT_08e82048;
  puVar4 = PTR_DAT_08e6a290;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }

  Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_4>
  :
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
        puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_047b0508;
      }
      uVar11 = uVar11 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar11 != 0);
  }
  puVar12 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)puVar4,0);
LAB_047b0508:
  uVar11 = (*(code *)*puVar12)(plVar13,puVar12[1]);
  if ((uVar11 & 1) != 0) {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_047b0564;
        }
        uVar11 = uVar11 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar11 != 0);
    }
    puVar12 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)puVar5,0);
LAB_047b0564:
    uVar16 = (*(code *)*puVar12)(plVar13,puVar12[1]);
    uVar11 = FUN_0564bef4(unaff_x29 + -0x28,uVar16,*(undefined8 *)puVar7);
    if ((uVar11 & 1) == 0) {
      lVar10 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
            puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_047b05d4;
          }
          uVar11 = uVar11 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar11 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348(plVar14,*(long *)puVar6,0);
LAB_047b05d4:
      (*(code *)*puVar12)(plVar14,uVar16,puVar12[1]);
    }
    goto 
    Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_4>
    ;
  }
  if (plVar13 != (long *)0x0) {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
          goto 
          Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_84>
          ;
        }
        uVar11 = uVar11 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar11 != 0);
    }
    puVar12 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)puVar3,0);

    Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_84>
    :
    (*(code *)*puVar12)(plVar13,puVar12[1]);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar11 = FUN_07f3793c(*(long *)(unaff_x20 + 0x10),0);
  if (((uVar11 & 1) == 0) &&
     (uVar11 = FUN_0564bef4(unaff_x29 + -0x28,0,*(undefined8 *)PTR_DAT_08e82078), (uVar11 & 1) == 0)
     ) {
    lVar10 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_047b06e0;
        }
        uVar11 = uVar11 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar11 != 0);
    }
    puVar12 = (undefined8 *)FUN_03cf1348(plVar14,*(long *)puVar6,0);
LAB_047b06e0:
    (*(code *)*puVar12)(plVar14,0,puVar12[1]);
  }
  lVar10 = *plVar14;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
        puVar12 = (undefined8 *)(lVar10 + (long)(*piVar15 + 2) * 0x10 + 0x138);
        goto LAB_047b0740;
      }
      uVar11 = uVar11 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar11 != 0);
  }
  puVar12 = (undefined8 *)FUN_03cf1348(plVar14,*(long *)puVar6,2);
LAB_047b0740:
  uVar16 = (*(code *)*puVar12)(plVar14,puVar12[1]);
  FUN_0564bdc0(unaff_x29 + -0x28,*(undefined8 *)PTR_DAT_08e82080);
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


