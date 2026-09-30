/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$OnDestroy
ENTRY_POINT: 06db5f64
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentDepthRaycaster__OnDestroy(void)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  byte unaff_w22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *plVar15;
  uint uVar16;
  float unaff_s8;
  
  FUN_03c8f898(PTR_DAT_08e90308);
  FUN_03c8f898(PTR_DAT_08e90310);
  FUN_03c8f898(PTR_DAT_08e90318);
  FUN_03c8f898(PTR_DAT_08e90320);
  *(undefined1 *)(unaff_x23 + 0xbae) = 1;
  uVar5 = thunk_FUN_03cf5234(*unaff_x24);
  FUN_06a4d5c4(uVar5,*unaff_x21);
  if ((unaff_x19 == 0) || (plVar6 = *(long **)(unaff_x19 + 0x18), plVar6 == (long *)0x0))
  goto LAB_06db62f4;
  lVar7 = (**(code **)(*plVar6 + 600))(plVar6,*(undefined8 *)(*plVar6 + 0x260));
  if (((*(char *)(unaff_x19 + 0x28) == '\0') == (bool)(unaff_w22 & 1)) ||
     ((unaff_s8 < *(float *)(unaff_x19 + 0x20) || (*(float *)(unaff_x19 + 0x24) < unaff_s8)))) {
LAB_06db62d0:
    uVar5 = 0;
  }
  else {
    lVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e89198);
    FUN_04e4b630(lVar8,*(undefined8 *)PTR_DAT_08e89188);
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6a338);
    FUN_06f82b08(uVar5,0);
    puVar4 = PTR_DAT_08e90178;
    if (lVar7 == 0) goto LAB_06db62f4;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      uVar16 = 0;
      bVar3 = true;
      do {
        if (uVar1 <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        plVar6 = *(long **)(unaff_x20 + 0x18);
        if (plVar6 == (long *)0x0) goto LAB_06db62f4;
        lVar12 = *plVar6;
        plVar15 = *(long **)(lVar7 + (long)(int)uVar16 * 8 + 0x20);
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 4) * 0x10 + 0x138);
              goto LAB_06db60c8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar4,4);
LAB_06db60c8:
        uVar13 = (*(code *)*puVar9)(plVar6,plVar15,uVar5,puVar9[1]);
        if (plVar15 == (long *)0x0) goto LAB_06db62f4;
        lVar12 = *plVar15;
        if ((uVar13 & 1) == 0) {
          uVar10 = (**(code **)(lVar12 + 0x1e8))(plVar15,*(undefined8 *)(lVar12 + 0x1f0));
          if (*(int *)(*(long *)PTR_DAT_08e81bd0 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e81bd0);
          }
          uVar13 = FUN_06db5dc4(uVar10);
          if ((uVar13 & 1) == 0) {
            cVar2 = *(char *)(unaff_x20 + 0x20);
            uVar10 = (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
            if (cVar2 == '\0') {
              uVar10 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e90308,uVar10,0);
            }
            else {
              uVar10 = FUN_06f7465c(*(undefined8 *)PTR_DAT_08e90320,uVar10,
                                    *(undefined8 *)PTR_DAT_08e90310,0);
            }
            if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            FUN_06dfdd34(uVar10,0);
            bVar3 = false;
          }
        }
        else {
          uVar10 = (**(code **)(lVar12 + 0x1d8))(plVar15,*(undefined8 *)(lVar12 + 0x1e0));
          if (lVar8 == 0) goto LAB_06db62f4;
          System_Array_InternalEnumerator<MaterialPropertyVector>__MoveNext
                    (lVar8,uVar10,*(undefined8 *)PTR_DAT_08e89178);
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < (int)uVar1);
      if (!bVar3) {
        if (*(char *)(unaff_x20 + 0x20) != '\0') {
          uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90300);
          FUN_04e4b630(uVar5,*(undefined8 *)PTR_DAT_08e902f8);
          uVar5 = FUN_06db62fc();
          return uVar5;
        }
        plVar6 = *(long **)(unaff_x19 + 0x10);
        if (plVar6 == (long *)0x0) {
LAB_06db62f4:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar10 = (**(code **)(*plVar6 + 0x308))(plVar6,*(undefined8 *)(*plVar6 + 0x310));
        plVar6 = *(long **)(unaff_x19 + 0x18);
        if (plVar6 == (long *)0x0) goto LAB_06db62f4;
        uVar11 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        uVar5 = FUN_06f75284(*(undefined8 *)PTR_DAT_08e90318,uVar10,uVar11,uVar5,0);
        if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)PTR_DAT_08e7e268);
        }
        FUN_06dfdd34(uVar5,0);
        goto LAB_06db62d0;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}


