/*
FUNCTION_NAME: FUN_05feb3a8
ENTRY_POINT: 05feb3a8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05febf48) */

undefined8 FUN_05feb3a8(long param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  
  if ((DAT_06b85587 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06769388);
    FUN_02d6084c(PTR_DAT_067679b8);
    FUN_02d6084c(Method_RootMotion_FinalIK_GrounderFBBIK_OnPostSolverUpdate__);
    FUN_02d6084c(PTR_DAT_06768260);
    FUN_02d6084c(PTR_DAT_067679c8);
    FUN_02d6084c(PTR_DAT_0675ed08);
    FUN_02d6084c(PTR_DAT_0675e1c0);
    FUN_02d6084c(PTR_DAT_06760700);
    FUN_02d6084c(PTR_DAT_0675e660);
    FUN_02d6084c(PTR_DAT_06773718);
    FUN_02d6084c(PTR_DAT_06771cd0);
    FUN_02d6084c(PTR_DAT_0675ee10);
    FUN_02d6084c(PTR_DAT_06766a18);
    FUN_02d6084c(PTR_DAT_0677bea8);
    FUN_02d6084c(PTR_DAT_06771610);
    FUN_02d6084c(PTR_DAT_0675e670);
    FUN_02d6084c(PTR_DAT_0675e238);
    FUN_02d6084c(PTR_DAT_067679a0);
    FUN_02d6084c(Method_RootMotion_FinalIK_GrounderFBBIK_OnSolverUpdate__);
    FUN_02d6084c(Method_RootMotion_FinalIK_GrounderIK_OnPostSolverUpdate__);
    FUN_02d6084c(Method_RootMotion_FinalIK_GrounderIK_OnSolverUpdate__);
    DAT_06b85587 = 1;
  }
  if ((param_1 == 0) ||
     (plVar7 = (long *)thunk_FUN_02d709fc(param_1,0), puVar5 = PTR_DAT_067679c8,
     plVar7 == (long *)0x0)) {
LAB_05febf30:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  plVar7 = (long *)(**(code **)(*plVar7 + 0x428))(plVar7,*(undefined8 *)(*plVar7 + 0x430));
  lVar15 = *(long *)puVar5;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar15);
  }
  if (plVar7 == (long *)0x0) goto LAB_05febf30;
  uVar8 = FUN_05020f0c(plVar7,0);
  puVar4 = PTR_DAT_0675e258;
  if ((uVar8 & 1) != 0) {
    lVar15 = *(long *)(PTR_DAT_0675e258 + 0x48);
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar9 = FUN_05015c2c(lVar15 + 0x20,0);
    uVar8 = FUN_0501ed54(plVar7,uVar9,0);
    if ((uVar8 & 1) == 0) {
      lVar15 = *(long *)(puVar4 + 0x28);
      if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar9 = FUN_05015c2c(lVar15 + 0x20,0);
      uVar8 = FUN_0501ed54(plVar7,uVar9,0);
      if ((uVar8 & 1) == 0) {
        lVar15 = *(long *)(puVar4 + 0x18);
        if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar9 = FUN_05015c2c(lVar15 + 0x20,0);
        uVar8 = FUN_0501ed54(plVar7,uVar9,0);
        if ((uVar8 & 1) == 0) {
          lVar15 = *(long *)(puVar4 + 0x30);
          if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar9 = FUN_05015c2c(lVar15 + 0x20,0);
          uVar8 = FUN_0501ed54(plVar7,uVar9,0);
          if ((uVar8 & 1) == 0) {
            lVar15 = *(long *)(puVar4 + 0x38);
            if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar9 = FUN_05015c2c(lVar15 + 0x20,0);
            uVar8 = FUN_0501ed54(plVar7,uVar9,0);
            if ((uVar8 & 1) == 0) {
              lVar15 = *(long *)(puVar4 + 0x68);
              if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar9 = FUN_05015c2c(lVar15 + 0x20,0);
              uVar8 = FUN_0501ed54(plVar7,uVar9,0);
              if ((uVar8 & 1) == 0) {
                lVar15 = *(long *)(puVar4 + 0x78);
                if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar9 = FUN_05015c2c(lVar15 + 0x20,0);
                uVar8 = FUN_0501ed54(plVar7,uVar9,0);
                if ((uVar8 & 1) == 0) {
                  lVar15 = *(long *)(puVar4 + 0x80);
                  if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar9 = FUN_05015c2c(lVar15 + 0x20,0);
                  uVar8 = FUN_0501ed54(plVar7,uVar9,0);
                  if ((uVar8 & 1) == 0) {
                    lVar15 = *(long *)(puVar4 + 0x88);
                    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar9 = FUN_05015c2c(lVar15 + 0x20,0);
                    uVar8 = FUN_0501ed54(plVar7,uVar9,0);
                    if ((uVar8 & 1) == 0) {
                      return 0;
                    }
                    uVar9 = *(undefined8 *)PTR_DAT_06760700;
                    lVar15 = thunk_FUN_02d9d438(param_1,uVar9);
                    if (lVar15 != 0) {
                      uVar9 = FUN_05ff8bc4();
                      return uVar9;
                    }
                  }
                  else {
                    uVar9 = *(undefined8 *)PTR_DAT_06773718;
                    lVar15 = thunk_FUN_02d9d438(param_1,uVar9);
                    if (lVar15 != 0) {
                      uVar9 = FUN_05ff8c3c();
                      return uVar9;
                    }
                  }
                }
                else {
                  uVar9 = *(undefined8 *)PTR_DAT_0675e670;
                  lVar15 = thunk_FUN_02d9d438(param_1,uVar9);
                  if (lVar15 != 0) {
                    uVar9 = FUN_05ff8cb4();
                    return uVar9;
                  }
                }
              }
              else {
                uVar9 = *(undefined8 *)PTR_DAT_06766a18;
                lVar15 = thunk_FUN_02d9d438(param_1,uVar9);
                if (lVar15 != 0) {
                  uVar9 = FUN_05ff8d2c();
                  return uVar9;
                }
              }
            }
            else {
              uVar9 = *(undefined8 *)PTR_DAT_06771cd0;
              lVar15 = thunk_FUN_02d9d438(param_1,uVar9);
              if (lVar15 != 0) {
                uVar9 = FUN_05ff8da4();
                return uVar9;
              }
            }
          }
          else {
            uVar9 = *(undefined8 *)PTR_DAT_06771610;
            lVar15 = thunk_FUN_02d9d438(param_1,uVar9);
            if (lVar15 != 0) {
              uVar9 = FUN_05ff8e94();
              return uVar9;
            }
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_0601ea80(*(undefined8 *)Method_RootMotion_FinalIK_GrounderIK_OnPostSolverUpdate__,0);
          uVar9 = *(undefined8 *)PTR_DAT_0675e1c0;
          lVar15 = thunk_FUN_02d9d438(param_1,uVar9);
          if (lVar15 != 0) {
            uVar9 = FUN_05ff8e1c();
            return uVar9;
          }
        }
      }
      else {
        uVar9 = *(undefined8 *)PTR_DAT_0675ed08;
        lVar15 = thunk_FUN_02d9d438(param_1,uVar9);
        if (lVar15 != 0) {
          uVar9 = FUN_05ff8f0c();
          return uVar9;
        }
      }
    }
    else {
      uVar9 = *(undefined8 *)PTR_DAT_0675ee10;
      lVar15 = thunk_FUN_02d9d438(param_1,uVar9);
      if (lVar15 != 0) {
        uVar9 = FUN_05ff8f84();
        return uVar9;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60e88(param_1,uVar9);
  }
  lVar15 = *(long *)(PTR_DAT_0675e258 + 0x90);
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar9 = FUN_05015c2c(lVar15 + 0x20,0);
  uVar8 = FUN_0501ed54(plVar7,uVar9,0);
  if ((uVar8 & 1) != 0) {
    uVar9 = *(undefined8 *)PTR_DAT_0675e238;
    lVar15 = thunk_FUN_02d9d438(param_1,uVar9);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(param_1,uVar9);
    }
    uVar6 = thunk_FUN_02d6ff50(param_1,0,0);
    puVar5 = PTR_DAT_067679a0;
    lVar16 = *(long *)PTR_DAT_067679a0;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar16);
      lVar16 = *(long *)puVar5;
    }
    uVar18 = uVar6;
    if (((int)**(uint **)(lVar16 + 0xb8) < (int)uVar6) &&
       (uVar18 = **(uint **)(lVar16 + 0xb8), *(int *)(lVar16 + 0xe4) == 0)) {
      thunk_FUN_02dbd7b4(lVar16);
      uVar18 = **(uint **)(*(long *)puVar5 + 0xb8);
    }
    lVar16 = FUN_05fede10(*(undefined8 *)Method_RootMotion_FinalIK_GrounderFBBIK_OnSolverUpdate__);
    if (DAT_06b853b0 == (code *)0x0) {
      DAT_06b853b0 = (code *)FUN_02d60810(
                                         "UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)"
                                         );
    }
    uVar9 = (*DAT_06b853b0)(uVar6,lVar16,0);
    if (lVar16 != 0) {
      if (DAT_06b85010 == (code *)0x0) {
        DAT_06b85010 = (code *)FUN_02d60810("UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)")
        ;
      }
      (*DAT_06b85010)(lVar16);
    }
    if (0 < (int)uVar18) {
      FUN_05ff62b4(uVar18);
    }
    bVar3 = 0 < (int)uVar18;
    if (0 < (int)uVar6) {
      uVar8 = 0;
      do {
        lVar16 = *(long *)puVar5;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar16 = *(long *)puVar5;
        }
        iVar1 = **(int **)(lVar16 + 0xb8);
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = (int)uVar8 / iVar1;
        }
        if ((int)uVar8 == iVar2 * iVar1) {
          if (DAT_06b84fd0 == (code *)0x0) {
            DAT_06b84fd0 = (code *)FUN_02d60810(
                                               "UnityEngine.AndroidJNI::PopLocalFrame(System.IntPtr)"
                                               );
          }
          (*DAT_06b84fd0)(0);
          FUN_05ff62b4(uVar18);
          bVar3 = true;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        uVar13 = FUN_05ff6034(*(undefined8 *)(lVar15 + 0x20 + uVar8 * 8));
        if (DAT_06b85440 == (code *)0x0) {
          DAT_06b85440 = (code *)FUN_02d60810(
                                             "UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)"
                                             );
        }
        (*DAT_06b85440)(uVar9,uVar8 & 0xffffffff,uVar13);
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
    }
    if (!bVar3) {
      return uVar9;
    }
    if (DAT_06b84fd0 == (code *)0x0) {
      DAT_06b84fd0 = (code *)FUN_02d60810("UnityEngine.AndroidJNI::PopLocalFrame(System.IntPtr)");
    }
    (*DAT_06b84fd0)(0);
    return uVar9;
  }
  uVar9 = *(undefined8 *)PTR_DAT_067679b8;
  if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar9 = FUN_05015c2c(uVar9,0);
  uVar8 = FUN_0501ed54(plVar7,uVar9,0);
  if ((uVar8 & 1) == 0) {
    uVar9 = *(undefined8 *)PTR_DAT_06768260;
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    plVar12 = (long *)FUN_05015c2c(uVar9,0);
    lVar15 = *(long *)puVar5;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar15);
    }
    if (plVar12 == (long *)0x0) goto LAB_05febf30;
    uVar8 = (**(code **)(*plVar12 + 0x298))(plVar12,plVar7,*(undefined8 *)(*plVar12 + 0x2a0));
    if ((uVar8 & 1) == 0) {
      uVar9 = thunk_FUN_02dc61f4(Method_RootMotion_FinalIK_GrounderQuadruped_OnPostSolverUpdate__);
      uVar13 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      uVar14 = thunk_FUN_02dc61f4(PTR_DAT_067679f0);
      uVar9 = FUN_04e8db00(uVar9,uVar13,uVar14,0);
      thunk_FUN_02dc61f4(PTR_DAT_067608d0);
      uVar13 = thunk_FUN_02d9d534();
      FUN_0503de34(uVar13,uVar9,0);
      uVar9 = thunk_FUN_02dc61f4(Method_RootMotion_FinalIK_GrounderQuadruped_OnSolverUpdate__);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar13,uVar9);
    }
    uVar9 = *(undefined8 *)Method_RootMotion_FinalIK_GrounderFBBIK_OnPostSolverUpdate__;
    lVar15 = thunk_FUN_02d9d438(param_1,uVar9);
    if (lVar15 == 0) goto LAB_05febf5c;
    uVar6 = thunk_FUN_02d6ff50(param_1,0,0);
    lVar16 = FUN_02d60934(*(undefined8 *)PTR_DAT_0677bea8,(ulong)uVar6);
    lVar10 = FUN_05fede10(*(undefined8 *)Method_RootMotion_FinalIK_GrounderIK_OnSolverUpdate__);
    if (0 < (int)uVar6) {
      uVar8 = 0;
      lVar19 = 0;
      do {
        if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_05febf34;
        if (*(long *)(lVar15 + 0x20 + uVar8 * 8) == 0) {
          if (lVar16 == 0) goto LAB_05febf30;
          if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_05febf34;
          *(undefined8 *)(lVar16 + 0x20 + uVar8 * 8) = 0;
LAB_05febb10:
          lVar17 = lVar19;
        }
        else {
          uVar9 = FUN_05ffc018();
          if (lVar16 == 0) goto LAB_05febf30;
          if ((*(uint *)(lVar16 + 0x18) <= uVar8) ||
             (*(undefined8 *)(lVar16 + 0x20 + uVar8 * 8) = uVar9, *(uint *)(lVar15 + 0x18) <= uVar8)
             ) goto LAB_05febf34;
          lVar17 = *(long *)(lVar15 + 0x20 + uVar8 * 8);
          if ((lVar17 == 0) ||
             ((lVar17 = *(long *)(lVar17 + 0x10), lVar17 == 0 ||
              (lVar17 = *(long *)(lVar17 + 0x18), lVar17 == 0)))) goto LAB_05febf30;
          lVar17 = *(long *)(lVar17 + 0x18);
          if (lVar19 != 0) {
            if (lVar19 != lVar10) {
              if (DAT_06b85018 == (code *)0x0) {
                DAT_06b85018 = (code *)FUN_02d60810(
                                                  "UnityEngine.AndroidJNI::IsSameObject(System.IntPtr,System.IntPtr)"
                                                  );
              }
              uVar11 = (*DAT_06b85018)(lVar19,lVar17);
              lVar17 = lVar10;
              if ((uVar11 & 1) == 0) goto LAB_05febb14;
            }
            goto LAB_05febb10;
          }
        }
LAB_05febb14:
        lVar19 = lVar17;
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
      goto LAB_05febb2c;
    }
  }
  else {
    uVar9 = *(undefined8 *)PTR_DAT_06769388;
    lVar15 = thunk_FUN_02d9d438(param_1,uVar9);
    if (lVar15 == 0) {
LAB_05febf5c:
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(param_1,uVar9);
    }
    uVar6 = thunk_FUN_02d6ff50(param_1,0,0);
    lVar16 = FUN_02d60934(*(undefined8 *)PTR_DAT_0677bea8,(ulong)uVar6);
    lVar10 = FUN_05fede10(*(undefined8 *)Method_RootMotion_FinalIK_GrounderIK_OnSolverUpdate__);
    if (0 < (int)uVar6) {
      uVar8 = 0;
      lVar19 = 0;
      do {
        if (*(uint *)(lVar15 + 0x18) <= uVar8) {
LAB_05febf34:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        lVar17 = *(long *)(lVar15 + 0x20 + uVar8 * 8);
        if (lVar17 == 0) {
          if (lVar16 == 0) goto LAB_05febf30;
          if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_05febf34;
          *(undefined8 *)(lVar16 + 0x20 + uVar8 * 8) = 0;
LAB_05feb8c8:
          lVar17 = lVar19;
        }
        else {
          uVar9 = 0;
          if (*(long *)(lVar17 + 0x10) != 0) {
            uVar9 = *(undefined8 *)(*(long *)(lVar17 + 0x10) + 0x18);
          }
          if (lVar16 == 0) goto LAB_05febf30;
          if ((*(uint *)(lVar16 + 0x18) <= uVar8) ||
             (*(undefined8 *)(lVar16 + 0x20 + uVar8 * 8) = uVar9, *(uint *)(lVar15 + 0x18) <= uVar8)
             ) goto LAB_05febf34;
          if (*(long *)(lVar17 + 0x18) == 0) goto LAB_05febf30;
          lVar17 = *(long *)(*(long *)(lVar17 + 0x18) + 0x18);
          if (lVar19 != 0) {
            if (lVar19 != lVar10) {
              if (DAT_06b85018 == (code *)0x0) {
                DAT_06b85018 = (code *)FUN_02d60810(
                                                  "UnityEngine.AndroidJNI::IsSameObject(System.IntPtr,System.IntPtr)"
                                                  );
              }
              uVar11 = (*DAT_06b85018)(lVar19,lVar17);
              lVar17 = lVar10;
              if ((uVar11 & 1) == 0) goto LAB_05feb8cc;
            }
            goto LAB_05feb8c8;
          }
        }
LAB_05feb8cc:
        lVar19 = lVar17;
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
      goto LAB_05febb2c;
    }
  }
  lVar19 = 0;
LAB_05febb2c:
  uVar9 = FUN_05ff8b4c(lVar16,lVar19);
  if (lVar10 != 0) {
    if (DAT_06b85010 == (code *)0x0) {
      DAT_06b85010 = (code *)FUN_02d60810("UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)");
    }
    (*DAT_06b85010)(lVar10);
  }
  return uVar9;
}


