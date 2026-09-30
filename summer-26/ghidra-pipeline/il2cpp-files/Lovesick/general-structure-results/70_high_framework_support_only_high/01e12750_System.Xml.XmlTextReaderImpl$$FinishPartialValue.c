/*
FUNCTION_NAME: System.Xml.XmlTextReaderImpl$$FinishPartialValue
ENTRY_POINT: 01e12750
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 System_Xml_XmlTextReaderImpl__FinishPartialValue(long param_1,long param_2,int param_3)

{
  undefined2 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double local_78;
  
  if ((DAT_0377faa7 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3478);
    thunk_FUN_00d48444(OVRPlugin_SpaceComponentType___TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__);
    DAT_0377faa7 = 1;
  }
  puVar5 = StringLiteral_3478;
  puVar3 = 
  Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
  ;
  puVar4 = System_Threading_Timer_TimerComparer_TypeInfo;
  switch(param_3) {
  case 4:
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    dVar16 = (double)(ulong)**(ushort **)(*(long *)OVRPlugin_SpaceComponentType___TypeInfo + 0xb8);
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      bVar2 = false;
      uVar14 = 0;
      uVar10 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar7 = *(uint *)(param_2 + 0x20 + uVar14 * 4);
        uVar10 = FUN_01de3b48(param_1,uVar7,0);
        if ((uVar10 & 1) != 0) {
          lVar11 = *(long *)(param_1 + 0x50);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar10 = (ulong)*(ushort *)(lVar11 + (long)(int)uVar7 * 2 + 0x20);
          if (~uVar10 < (ulong)dVar16) {
            uVar8 = FUN_00da519c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar8,*(undefined8 *)puVar5);
          }
          dVar16 = (double)((long)dVar16 + uVar10);
          bVar2 = true;
        }
        uVar10 = (ulong)*(uint *)(param_2 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((long)uVar14 < (long)(int)*(uint *)(param_2 + 0x18));
      if (bVar2) {
        local_78 = dVar16;
        uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__
                                   ,&local_78);
        return uVar8;
      }
    }
    break;
  case 5:
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar14 = (ulong)**(ushort **)(*(long *)OVRPlugin_SpaceComponentType___TypeInfo + 0xb8);
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      iVar13 = 0;
      bVar2 = false;
      uVar10 = 0;
      uVar12 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar7 = *(uint *)(param_2 + 0x20 + uVar10 * 4);
        uVar12 = FUN_01de3b48(param_1,uVar7,0);
        if ((uVar12 & 1) != 0) {
          lVar11 = *(long *)(param_1 + 0x50);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar12 = (ulong)*(ushort *)(lVar11 + (long)(int)uVar7 * 2 + 0x20);
          if (((long)(uVar12 ^ 0x7fffffffffffffff) < (long)uVar14) ||
             (((long)uVar14 < 0 && ((long)uVar12 < (long)(-0x8000000000000000 - uVar14))))) {
            uVar8 = FUN_00da519c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar8,*(undefined8 *)puVar5);
          }
          uVar14 = uVar14 + uVar12;
          iVar13 = iVar13 + 1;
          bVar2 = true;
        }
        uVar12 = (ulong)*(uint *)(param_2 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(param_2 + 0x18));
      if (bVar2) {
        lVar11 = 0;
        if ((long)iVar13 != 0) {
          lVar11 = (long)uVar14 / (long)iVar13;
        }
        if (lVar11 < 0x10000) {
          local_78 = (double)CONCAT62(local_78._2_6_,(short)lVar11);
          uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_78);
          return uVar8;
        }
        uVar8 = FUN_00da519c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar8,*(undefined8 *)puVar5);
      }
    }
    break;
  case 6:
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      bVar2 = false;
      uVar14 = 0;
      uVar10 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      uVar6 = 0xffff;
      do {
        if (uVar10 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar7 = *(uint *)(param_2 + 0x20 + uVar14 * 4);
        uVar10 = FUN_01de3b48(param_1,uVar7,0);
        if ((uVar10 & 1) != 0) {
          lVar11 = *(long *)(param_1 + 0x50);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar1 = *(undefined2 *)(lVar11 + (long)(int)uVar7 * 2 + 0x20);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar6 = FUN_01772740(uVar1,uVar6,0);
          bVar2 = true;
        }
        uVar10 = (ulong)*(uint *)(param_2 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((long)uVar14 < (long)(int)*(uint *)(param_2 + 0x18));
      if (bVar2) {
        local_78 = (double)CONCAT62(local_78._2_6_,(short)uVar6);
        uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_78);
        return uVar8;
      }
    }
    break;
  case 7:
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      uVar6 = 0;
      bVar2 = false;
      uVar14 = 0;
      uVar10 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar7 = *(uint *)(param_2 + 0x20 + uVar14 * 4);
        uVar10 = FUN_01de3b48(param_1,uVar7,0);
        if ((uVar10 & 1) != 0) {
          lVar11 = *(long *)(param_1 + 0x50);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          uVar1 = *(undefined2 *)(lVar11 + (long)(int)uVar7 * 2 + 0x20);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar6 = FUN_01772548(uVar1,uVar6,0);
          bVar2 = true;
        }
        uVar10 = (ulong)*(uint *)(param_2 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((long)uVar14 < (long)(int)*(uint *)(param_2 + 0x18));
      if (bVar2) {
        local_78 = (double)CONCAT62(local_78._2_6_,(short)uVar6);
        uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_78);
        return uVar8;
      }
    }
    break;
  case 8:
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(param_2 + 0x18) == 0) {
      return 0;
    }
    if ((int)*(long *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar11 = *(long *)(param_1 + 0x50);
    if (lVar11 != 0) {
      if (*(uint *)(param_2 + 0x20) < *(uint *)(lVar11 + 0x18)) {
        local_78 = (double)CONCAT62(local_78._2_6_,
                                    *(undefined2 *)
                                     (lVar11 + (long)(int)*(uint *)(param_2 + 0x20) * 2 + 0x20));
        uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                    Method_System_Threading_Tasks_Task<DestructibleMeshComponent_MeshSegmentationResult>_ContinueWith__
                                   ,&local_78);
        return uVar8;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  case 9:
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((int)*(ulong *)(param_2 + 0x18) < 1) {
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      uVar14 = 0;
      uVar10 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar7 = FUN_01de3b48(param_1,*(undefined4 *)(param_2 + 0x20 + uVar14 * 4),0);
        uVar10 = (ulong)*(uint *)(param_2 + 0x18);
        uVar14 = uVar14 + 1;
        iVar13 = iVar13 + (uVar7 & 1);
      } while ((long)uVar14 < (long)(int)*(uint *)(param_2 + 0x18));
    }
    local_78 = (double)CONCAT44(local_78._4_4_,iVar13);
    uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                               ,&local_78);
    return uVar8;
  case 10:
  case 0xb:
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((int)*(ulong *)(param_2 + 0x18) < 1) {
      iVar13 = 0;
      dVar16 = 0.0;
      dVar17 = 0.0;
    }
    else {
      iVar13 = 0;
      uVar14 = 0;
      uVar10 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      dVar17 = 0.0;
      dVar16 = 0.0;
      do {
        if (uVar10 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar7 = *(uint *)(param_2 + 0x20 + uVar14 * 4);
        uVar10 = FUN_01de3b48(param_1,uVar7,0);
        if ((uVar10 & 1) != 0) {
          lVar11 = *(long *)(param_1 + 0x50);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          iVar13 = iVar13 + 1;
          dVar15 = (double)NEON_ucvtf((ulong)*(ushort *)(lVar11 + (long)(int)uVar7 * 2 + 0x20));
          dVar16 = dVar16 + dVar15;
          dVar17 = dVar17 + dVar15 * dVar15;
        }
        uVar10 = (ulong)*(uint *)(param_2 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((long)uVar14 < (long)(int)*(uint *)(param_2 + 0x18));
    }
    puVar3 = PTR_DAT_033f2f78;
    if (iVar13 + -1 != 0 && 0 < iVar13) {
      dVar17 = dVar17 * (double)iVar13 - dVar16 * dVar16;
      local_78 = 0.0;
      if ((0.0 <= dVar17) && (DAT_02951918 <= dVar17 / (dVar16 * dVar16))) {
        local_78 = dVar17 / (double)((iVar13 + -1) * iVar13);
      }
      if (param_3 == 0xb) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        local_78 = SQRT(local_78);
        uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&local_78);
        return uVar8;
      }
      uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033f2f78,&local_78);
      return uVar8;
    }
    break;
  default:
    uVar8 = FUN_01d34390(param_3,*(undefined8 *)(param_1 + 0x20),0);
    uVar9 = thunk_FUN_00d48444(StringLiteral_3478);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,uVar9);
  }
  return *(undefined8 *)(param_1 + 0x40);
}


