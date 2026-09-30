/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$GetUnsafePtr<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 017dde44
PROGRAM: vrfs-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<OVRPlugin_SpaceQueryResult>
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long in_x9;
  int *piVar10;
  int *in_x10;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  long *in_stack_00000150;
  ulong in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)(in_x10[4] + 0x17) * 0x10 + 0x138);
      goto FUN_017de2d0;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar5 = (undefined8 *)FUN_015c2a80();
FUN_017de2d0:
  lVar7 = (*(code *)*puVar5)();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  in_stack_00000168 = FUN_026f05e4(lVar7,*(undefined8 *)PTR_DAT_06e2c830);
  uVar8 = FUN_023a8274(&stack0x00000168,*(undefined8 *)PTR_DAT_06e67880);
  if ((uVar8 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000168;
    thunk_FUN_01656ef8(unaff_x19 + 0x14,0);
    FUN_03e79f14(unaff_x19 + 2,&stack0x00000168);
    return;
  }
  uVar8 = FUN_023a82b8(&stack0x00000168,*(undefined8 *)PTR_DAT_06dd10b8);
  if ((uVar8 & 1) == 0) {
    lVar7 = thunk_FUN_015d056c(*unaff_x27);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_017d6da8(lVar7,0x4fda);
    plVar4 = (long *)(unaff_x19 + 10);
    *plVar4 = lVar7;
    thunk_FUN_01656ef8(plVar4,lVar7);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_017dd0d8();
    lVar7 = *plVar4;
  }
  else {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_017dd0d8();
    plVar4 = (long *)FUN_017de8c8();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar7 = *plVar4;
    uVar13 = *(undefined8 *)(unaff_x19 + 0xc);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06db2708) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 8) * 0x10 + 0x138);
          goto LAB_017ddec8;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar4,*(long *)PTR_DAT_06db2708,8);
LAB_017ddec8:
    lVar7 = (*(code *)*puVar5)(plVar4,uVar13,uVar11,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    in_stack_00000160 = FUN_026e60a0(lVar7,*(undefined8 *)PTR_DAT_06e0c0c8);
    uVar8 = FUN_023a7768(&stack0x00000160,*(undefined8 *)PTR_DAT_06e679c0);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000160;
      thunk_FUN_01656ef8(unaff_x19 + 0x16,0);
      FUN_03e78e98(unaff_x19 + 2,&stack0x00000160);
      return;
    }
    auVar16 = FUN_023a77ac(&stack0x00000160,*(undefined8 *)PTR_DAT_06e57fb0);
    plVar4 = auVar16._8_8_;
    plVar6 = (long *)(unaff_x19 + 10);
    *plVar6 = auVar16._0_8_;
    thunk_FUN_01656ef8(plVar6,auVar16._0_8_);
    lVar7 = *plVar6;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      plVar6 = (long *)FUN_017d9264();
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar14 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + 0x18);
      lVar7 = *plVar6;
      uVar11 = *(undefined8 *)(unaff_x19 + 0xe);
      uVar13 = *(undefined8 *)(unaff_x19 + 0x10);
      uVar15 = *(undefined8 *)(unaff_x20 + 0x30);
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
            goto LAB_017de12c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x28,0xd);
LAB_017de12c:
      lVar7 = (*(code *)*puVar5)(plVar6,uVar14,uVar11,plVar4,uVar13,uVar15,puVar5[1]);
      uVar8 = FUN_03713898(unaff_x20 + 0x30,0);
      if ((uVar8 & 1) != 0) {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        _in_stack_00000140 = (**(code **)(*plVar4 + 0x3c8))(plVar4,*(undefined8 *)(*plVar4 + 0x3d0))
        ;
        _in_stack_00000150 = FUN_036991cc(&stack0x00000140,0);
        if (DAT_0722a6b5 == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e52150);
          thunk_FUN_0159f088(PTR_DAT_06dd2198);
          DAT_0722a6b5 = '\x01';
        }
        plVar4 = in_stack_00000150;
        if (in_stack_00000150 != (long *)0x0) {
          lVar7 = *in_stack_00000150;
          bVar1 = *(byte *)(*(long *)PTR_DAT_06dd2198 + 300);
          if ((*(byte *)(lVar7 + 300) < bVar1) ||
             (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06dd2198
             )) {
            uVar12 = in_stack_00000158 & 0xffff;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06e52150) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_017de35c;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_015c2a80(in_stack_00000150,*(long *)PTR_DAT_06e52150,0);
LAB_017de35c:
            iVar3 = (*(code *)*puVar5)(plVar4,uVar12,puVar5[1]);
            if (iVar3 == 0) goto LAB_017de384;
          }
          else {
            uVar8 = FUN_036982e0(in_stack_00000150,0);
            if ((uVar8 & 1) == 0) {
LAB_017de384:
              *unaff_x19 = 3;
              *(undefined1 (*) [16])(unaff_x19 + 0x18) = _in_stack_00000150;
              thunk_FUN_01656ef8((undefined1 (*) [16])(unaff_x19 + 0x18),0);
              FUN_03e813e8(unaff_x19 + 2,&stack0x00000150);
              return;
            }
          }
        }
        if (DAT_0722a6b6 == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e52150);
          thunk_FUN_0159f088(PTR_DAT_06dd2198);
          DAT_0722a6b6 = '\x01';
        }
        plVar4 = in_stack_00000150;
        if (in_stack_00000150 != (long *)0x0) {
          lVar7 = *in_stack_00000150;
          bVar1 = *(byte *)(*(long *)PTR_DAT_06dd2198 + 300);
          if ((*(byte *)(lVar7 + 300) < bVar1) ||
             (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06dd2198
             )) {
            uVar12 = in_stack_00000158 & 0xffff;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar8 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06e52150) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                  goto 
                  Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<Vector2>
                  ;
                }
                uVar8 = uVar8 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_015c2a80(in_stack_00000150,*(long *)PTR_DAT_06e52150,2);
Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<Vector2>:
            (*(code *)*puVar5)(plVar4,uVar12,puVar5[1]);
          }
          else {
            FUN_02df6c8c(in_stack_00000150,0);
          }
        }
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        FUN_017dd0d8();
        lVar7 = thunk_FUN_015d056c(*unaff_x27);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        FUN_017d6da8(lVar7,0xffffffff80000032);
        goto LAB_017de010;
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      in_stack_00000138 =
           System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>__System_Collections_IList_IndexOf
                     (lVar7,*(undefined8 *)PTR_DAT_06dce0f0);
      uVar8 = FUN_023a8930(&stack0x00000138,*(undefined8 *)PTR_DAT_06ddd6b0);
      if ((uVar8 & 1) == 0) {
        *unaff_x19 = 4;
        *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000138;
        thunk_FUN_01656ef8(unaff_x19 + 0x1c,0);
        FUN_03e7e340(unaff_x19 + 2,&stack0x00000138);
        return;
      }
      lVar7 = FUN_023a8974(&stack0x00000138,*unaff_x29);
      plVar4 = (long *)(unaff_x19 + 10);
      *plVar4 = lVar7;
      thunk_FUN_01656ef8(plVar4);
      lVar7 = *plVar4;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      puVar2 = PTR_DAT_06e00890;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(long *)(lVar7 + 0x10) == 0) {
        lVar7 = *(long *)PTR_DAT_06e00890;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar7 = *(long *)puVar2;
        }
        lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar9 == 0) {
          if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          FUN_017dd0d8();
          lVar7 = thunk_FUN_015d056c(*unaff_x27);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          FUN_017d6da8(lVar7,0xffffffff8000003c);
        }
        else {
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar9 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          }
          if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          lVar7 = FUN_017d79f4(lVar9,*(undefined8 *)(unaff_x20 + 0x28));
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          *(undefined4 *)(lVar7 + 0x38) = 3;
          lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          lVar7 = FUN_017d79f4(lVar7,*(undefined8 *)(unaff_x20 + 0x28));
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(unaff_x19 + 0xe);
          lVar7 = FUN_017dade4();
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          in_stack_00000138 =
               System_Collections_Generic_List<ShapeRecognizerActiveState_FingerFeatureStateUsage>__System_Collections_IList_IndexOf
                         (lVar7,*(undefined8 *)PTR_DAT_06dce0f0);
          uVar8 = FUN_023a8930(&stack0x00000138,*(undefined8 *)PTR_DAT_06ddd6b0);
          if ((uVar8 & 1) == 0) {
            *unaff_x19 = 5;
            *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000138;
            thunk_FUN_01656ef8(unaff_x19 + 0x1c,0);
            FUN_03e7e340(unaff_x19 + 2,&stack0x00000138);
            return;
          }
          FUN_023a8974(&stack0x00000138,*unaff_x29);
          if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          FUN_017dd0d8();
          lVar7 = *(long *)(unaff_x19 + 10);
        }
        goto LAB_017de010;
      }
      if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(long *)(*plVar4 + 0x10) == -0x7fffffce) {
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        FUN_017dd0d8();
      }
      else {
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        FUN_017dd0d8();
      }
    }
    else {
      if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(long *)(*plVar6 + 0x10) == -0x7fffffce) {
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        FUN_017dd0d8();
      }
      else {
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        FUN_017dd0d8();
      }
    }
    lVar7 = *(long *)(unaff_x19 + 10);
  }
LAB_017de010:
  puVar2 = PTR_DAT_06d88e48;
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 10) = 0;
  thunk_FUN_01656ef8(unaff_x19 + 10,0);
  *(undefined8 *)(unaff_x19 + 0xc) = 0;
  thunk_FUN_01656ef8(unaff_x19 + 0xc,0);
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_01656ef8(unaff_x19 + 0x10,0);
  FUN_0532e428(unaff_x19 + 2,lVar7,*(undefined8 *)puVar2);
  return;
}


