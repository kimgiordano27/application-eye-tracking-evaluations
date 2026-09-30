/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetTrackingTransformRelativePose
ENTRY_POINT: 0369fbf4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose(ulong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar16;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_SelectMany<Enum,_ValueTuple<Enum,_string>>__);
    *(undefined1 *)(unaff_x21 + 0xf63) = 1;
  }
  if (unaff_x19 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\0') {
      return;
    }
    iVar2 = *(int *)((long)unaff_x20 + 0x94);
    plVar7 = (long *)(**(code **)(*unaff_x20 + 0x268))();
    puVar4 = Method_System_Linq_Enumerable_SelectMany<Enum,_ValueTuple<Enum,_string>>__;
    if (plVar7 != (long *)0x0) {
      lVar9 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_System_Linq_Enumerable_SelectMany<Enum,_ValueTuple<Enum,_string>>__) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0369fc8c;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_System_Linq_Enumerable_SelectMany<Enum,_ValueTuple<Enum,_string>>__
                            ,0);
LAB_0369fc8c:
      iVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (iVar2 == iVar5) {
        lVar9 = unaff_x20[0x11];
LAB_0369fca4:
        iVar5 = (int)unaff_x20[0x10];
        iVar1 = *(int *)((long)unaff_x20 + 0x84);
        iVar2 = iVar5;
        if (iVar1 <= iVar5) {
          iVar2 = iVar1;
        }
        iVar3 = 0;
        if (-1 < iVar1) {
          iVar3 = iVar2;
        }
        *(int *)((long)unaff_x20 + 0x84) = iVar3;
        if (lVar9 != 0) {
          lVar13 = 0;
          iVar3 = ((int)unaff_x20[0x12] + iVar5) - iVar3;
          iVar2 = 0;
          if (iVar5 != 0) {
            iVar2 = iVar3 / iVar5;
          }
          uVar11 = iVar3 - iVar2 * iVar5;
          do {
            uVar10 = (uint)lVar13;
            if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar10) {
              return;
            }
            if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_0369fe48:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            lVar9 = *(long *)(lVar9 + lVar13 * 8 + 0x20);
            if (lVar9 == 0) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_0369fe48;
            lVar15 = *(long *)(unaff_x19 + 0x38);
            if (lVar15 == 0) break;
            if (*(uint *)(lVar15 + 0x18) <= uVar10) goto LAB_0369fe48;
            lVar9 = lVar9 + (long)(int)uVar11 * 0x10;
            uVar16 = *(undefined8 *)(lVar9 + 0x20);
            lVar15 = lVar15 + lVar13 * 0x10;
            lVar13 = lVar13 + 1;
            *(undefined8 *)(lVar15 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
            *(undefined8 *)(lVar15 + 0x20) = uVar16;
            lVar9 = unaff_x20[0x11];
          } while (lVar9 != 0);
        }
      }
      else {
        plVar7 = (long *)(**(code **)(*unaff_x20 + 0x268))();
        if (plVar7 != (long *)0x0) {
          lVar9 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0369fdb4;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_0369fdb4:
          uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          iVar5 = (int)unaff_x20[0x10];
          lVar9 = unaff_x20[0x11];
          iVar2 = (int)unaff_x20[0x12] + 1;
          iVar1 = 0;
          if (iVar5 != 0) {
            iVar1 = iVar2 / iVar5;
          }
          *(int *)(unaff_x20 + 0x12) = iVar2 - iVar1 * iVar5;
          *(undefined4 *)((long)unaff_x20 + 0x94) = uVar6;
          if (lVar9 != 0) {
            lVar13 = 0;
            do {
              uVar11 = (uint)lVar13;
              if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar11) goto LAB_0369fca4;
              if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_0369fe48;
              lVar15 = *(long *)(unaff_x19 + 0x38);
              if (lVar15 == 0) break;
              if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_0369fe48;
              lVar9 = *(long *)(lVar9 + lVar13 * 8 + 0x20);
              if (lVar9 == 0) break;
              if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x20 + 0x12)) goto LAB_0369fe48;
              lVar15 = lVar15 + lVar13 * 0x10;
              uVar16 = *(undefined8 *)(lVar15 + 0x20);
              lVar9 = lVar9 + (long)(int)*(uint *)(unaff_x20 + 0x12) * 0x10;
              lVar13 = lVar13 + 1;
              *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar15 + 0x28);
              *(undefined8 *)(lVar9 + 0x20) = uVar16;
              lVar9 = unaff_x20[0x11];
            } while (lVar9 != 0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


