/*
FUNCTION_NAME: FUN_02073890
ENTRY_POINT: 02073890
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x02073b20) */
/* WARNING: Removing unreachable block (ram,0x02073fc8) */
/* WARNING: Removing unreachable block (ram,0x02073e70) */

void FUN_02073890(void)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  int iVar18;
  int local_6c;
  char local_68 [4];
  char local_64 [4];
  
  if ((DAT_03780c4b & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<uint,_uint>_set_Item__);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XmlAtomicValue__ctor__);
    thunk_FUN_00d48444(StringLiteral_9284);
    thunk_FUN_00d48444(StringLiteral_4362);
    thunk_FUN_00d48444(StringLiteral_10662);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XmlUntypedConverter_ToBoolean__);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_4234);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WitUnityRequest_<SendMessageAsync>d__20>__
                      );
    thunk_FUN_00d48444(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo);
    DAT_03780c4b = 1;
  }
  local_64[0] = '\0';
  local_68[0] = '\0';
  local_6c = 0;
  lVar11 = FUN_017dcb18(0);
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WitUnityRequest_<SendMessageAsync>d__20>__
  ;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_017e0124(lVar11,1,0);
  lVar11 = *(long *)puVar5;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *(long *)puVar5;
  }
  uVar12 = **(undefined8 **)(lVar11 + 0xb8);
  local_64[0] = '\0';
  FUN_017d75a8(uVar12,local_64,0);
  lVar11 = *(long *)puVar5;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *(long *)puVar5;
  }
  iVar9 = thunk_FUN_00d74568(*(long *)(lVar11 + 0xb8) + 0x10,1,1,0);
  puVar8 = StringLiteral_9284;
  puVar7 = StringLiteral_4362;
  puVar6 = Method_System_Xml_Schema_XmlAtomicValue__ctor__;
  puVar4 = Method_System_Collections_Generic_Dictionary<uint,_uint>_set_Item__;
  puVar3 = OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo;
  if (iVar9 == 1) {
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar5;
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_017daee4(lVar11,0);
LAB_02073a18:
    do {
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar11);
        lVar11 = *(long *)puVar5;
      }
      lVar16 = *(long *)(lVar11 + 0xb8);
      if (*(long *)(lVar16 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (0 < *(int *)(*(long *)(lVar16 + 8) + 0x18)) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar11);
          lVar16 = *(long *)(*(long *)puVar5 + 0xb8);
        }
        uVar17 = *(undefined8 *)(lVar16 + 8);
        local_68[0] = '\0';
        FUN_017d75a8(uVar17,local_68,0);
        lVar11 = *(long *)puVar5;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar11 = *(long *)puVar5;
        }
        lVar16 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        while (lVar16 = *(long *)(lVar16 + 0x10), lVar16 != 0) {
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar11 = *(long *)puVar5;
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0131bd88(lVar11,lVar16,*(undefined8 *)puVar7);
          if (**(long **)(*(long *)puVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0131b148(**(long **)(*(long *)puVar5 + 0xb8),lVar16,*(undefined8 *)puVar8);
          lVar11 = *(long *)puVar5;
          lVar16 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        if (local_68[0] != '\0') {
          thunk_FUN_00d56f10(uVar17,0);
        }
      }
      iVar9 = thunk_FUN_00d61070(0);
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *(long *)puVar5;
      }
      if (**(long **)(lVar11 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar11 = *(long *)(**(long **)(lVar11 + 0xb8) + 0x10);
      bVar2 = false;
      iVar18 = 0;
      while (lVar11 != 0) {
        plVar13 = (long *)FUN_00c556b8(lVar11,*(undefined8 *)puVar6);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar13 = (long *)(**(code **)(*plVar13 + 0x198))(plVar13,*(undefined8 *)(*plVar13 + 0x1a0))
        ;
        if (plVar13 == (long *)0x0) {
          lVar16 = FUN_0131a9b0(lVar11,*(undefined8 *)puVar4);
          lVar14 = *(long *)puVar5;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar14 = *(long *)puVar5;
          }
          if (**(long **)(lVar14 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0131bd88(**(long **)(lVar14 + 0xb8),lVar11,*(undefined8 *)puVar7);
          lVar11 = lVar16;
        }
        else {
          bVar1 = *(byte *)(*(long *)StringLiteral_4234 + 300);
          if ((*(byte *)(*plVar13 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)StringLiteral_4234)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c();
          }
          uVar15 = FUN_02074070(plVar13,&local_6c);
          iVar10 = local_6c;
          if ((uVar15 & 1) != 0) {
            if (bVar2) {
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if (iVar9 <= iVar18 == (iVar18 <= iVar10 != iVar10 < iVar9)) {
                bVar2 = true;
                goto LAB_02073c54;
              }
            }
            bVar2 = true;
            iVar18 = iVar10;
          }
LAB_02073c54:
          lVar11 = FUN_0131a9b0(lVar11,*(undefined8 *)puVar4);
        }
      }
      iVar10 = thunk_FUN_00d61070(0);
      if (bVar2) {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (iVar9 <= iVar18 == ((iVar18 - iVar10 == 0 || iVar18 < iVar10) != iVar10 < iVar9)) {
          iVar9 = 0;
        }
        else {
          if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          iVar9 = FUN_01772750(iVar18 - iVar10,0x7ffffff0,0);
          iVar9 = iVar9 + 0xf;
        }
      }
      else {
        iVar9 = 30000;
      }
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *(long *)puVar5;
      }
      uVar17 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x28);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      iVar9 = FUN_017e4750(uVar17,iVar9,0,0);
      if (iVar9 == 0x102) {
        if (!bVar2) {
          lVar11 = *(long *)puVar5;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar11 = *(long *)puVar5;
          }
          thunk_FUN_00d74568(*(long *)(lVar11 + 0xb8) + 0x10,0,1,0);
          plVar13 = *(long **)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar15 = (**(code **)(*plVar13 + 0x1c8))(plVar13,0,0,*(undefined8 *)(*plVar13 + 0x1d0));
          if ((uVar15 & 1) == 0) break;
          lVar11 = *(long *)puVar5;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar11 = *(long *)puVar5;
          }
          iVar9 = thunk_FUN_00d74568(*(long *)(lVar11 + 0xb8) + 0x10,1,0,0);
          if (iVar9 != 0) break;
        }
        goto LAB_02073a18;
      }
    } while (iVar9 != 0);
  }
  if (local_64[0] != '\0') {
    thunk_FUN_00d56f10(uVar12,0);
  }
  return;
}


